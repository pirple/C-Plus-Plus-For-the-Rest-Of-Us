#include <iostream>
#include <iomanip>

using namespace std;

float processLineItem(int qty, const char *description, float price)
{
    /*
    calculate the
    line item total
    in this block comment
     */
    float lineTotal = price * qty;

    cout << setiosflags(ios::fixed);

    cout << setw(10) << qty
            << setw(20) << description
            << "  $" << setw(6) << setprecision(2) << price
            << "  $" << setw(6) << setprecision(2) << lineTotal << endl;

    return lineTotal;

}

int main()
{
    float runningTotal = 0;

    cout << setw(10) << "Quantity"
            << setw(20) << "Description"
            << setw(9) << "Price"
            << setw(9) << "Total" << endl;

    runningTotal += processLineItem(3, "Apples", .5F);
    runningTotal += processLineItem(2, "Oranges", .45F);
    runningTotal += processLineItem(1, "Lobster", 21.99F);

    cout << endl;
    cout << "The grocery bill totals $" <<runningTotal << endl;

    return 0;
}
