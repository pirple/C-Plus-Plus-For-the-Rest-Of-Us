#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> bubbleSort(vector<string> vectorToSort)
{
    int nameCount = vectorToSort.size();

    for (int outer = 0; outer < nameCount - 1; outer++)
    {
        for (int inner = outer + 1; inner  < nameCount; inner++)
        {
            string innerString = vectorToSort[inner];
            string outerString = vectorToSort[outer];
            if (innerString < outerString)
            {
                //swap them
                iter_swap(vectorToSort.begin() + inner, vectorToSort.begin() + outer);
            }
        }
    }

    return vectorToSort;
}

int main()
{
   vector<string> listOfNames;

   ifstream myfile ("names.txt");

   if (myfile.is_open())
   {
       string line;
       while (getline(myfile, line))
       {
           listOfNames.push_back(line);
       }
       myfile.close();
   }
   else
   {
       cout << "Unable to open the file." << endl;
   }

   if (listOfNames.size() > 0)
   {
       listOfNames = bubbleSort(listOfNames);
       cout << "The following names were found: " << endl;
       vector<string>::iterator itName = listOfNames.begin();

       while (itName != listOfNames.end())
       {
           cout << *itName << endl;
           itName++;
       }
   }
   else
   {
       cout << "No names were found" << endl;
   }

    return 0;
}
