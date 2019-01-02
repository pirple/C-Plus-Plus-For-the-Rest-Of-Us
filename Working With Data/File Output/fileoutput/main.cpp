#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    vector<string> listOfNames;

    while (true)
    {
        cout << "Enter a name (or 'Q' to finish) and press Enter: " << endl;

        string name;
        getline(cin, name);

        if (name == "Q")
        {
            break;
        }
        else
        {
            listOfNames.push_back(name);
        }
    }

    ofstream myfile;
    myfile.open("savednames.txt", ios_base::app);

    vector<string>::iterator itName = listOfNames.begin();

    while (itName != listOfNames.end())
    {
        myfile << *itName << endl;
        itName++;
    }

    myfile.close();

    return 0;
}
