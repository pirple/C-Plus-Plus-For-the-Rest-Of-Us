#include <iostream>

using namespace std;

int main()
{
    int planetCount = 8;

#ifdef ExtraPlanet
    planetCount++;
#endif // ExtraPlanet

    cout << "Greetings, all " << planetCount << " Planets" << endl;
    return 0;
}
