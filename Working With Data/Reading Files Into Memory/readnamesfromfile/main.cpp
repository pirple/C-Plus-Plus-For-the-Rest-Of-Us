#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

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
