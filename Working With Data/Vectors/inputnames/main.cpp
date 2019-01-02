#include <iostream>
#include <string>
#include <vector>

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

    if (listOfNames.size() > 0)
    {
        cout << "The following names were entered: " << endl;

        vector<string>::iterator itName = listOfNames.begin();

        while(itName != listOfNames.end() )
        {
            cout << *itName << endl;
            itName++;
        }

    }
    else
    {
        cout << "No names were entered" << endl;
    }

    return 0;
}
