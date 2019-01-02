#include <iostream>

using namespace std;

int main()
{
    const int SECONDS_PER_MINUTE = 60;

    int minutes = 5;
    int seconds = 0;

    seconds = minutes * SECONDS_PER_MINUTE;

    cout << "There are " << seconds << " sec in " << minutes << " min.";
}
