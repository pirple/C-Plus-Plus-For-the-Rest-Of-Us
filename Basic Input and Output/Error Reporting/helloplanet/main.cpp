#include <iostream>

using namespace std;

int main()
{
    int planetCount = 8;

    bool extraPlanet = true;

    if (extraPlanet)
    {
        planetCount++;
    }

    planetCount ++;

    int retVal = 0;

    if (planetCount > 9)
    {
        cerr << "solar system overflow" << endl;
        retVal = 1;
    }
    else
    {
        cout << "Greetings, all " << planetCount << " Planets" << endl;
    }

    return retVal;
}
