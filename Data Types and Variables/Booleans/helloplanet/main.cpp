#include <iostream>

using namespace std;

int main()
{
    int planetCount = 10;

    bool extraPlanet = (planetCount < 9);

    if (extraPlanet)
    {
        planetCount++;
    }

    cout << "Greetings, all " << planetCount << " Planets" << endl;
    return 0;
}
