#include <iostream>

using namespace std;

void showBoard(char * pSquare)
{
    cout << "+--------+" << endl;
    for (int y = 0; y < 8; y++)
    {
        cout << "|";
        for (int x = 0; x < 8; x++)
        {
            char outChar = *pSquare;
            cout << outChar;
            pSquare++;
        }
        cout << "|" << endl;
    }
    cout << "+--------+" << endl;
}

int main()
{
    const char RED_SQUARE = ' ';
    const char BLK_SQUARE = '#';
    const char RED_PLAYER = '@';
    const char GRY_PLAYER = 'O';

    char checkerboard[8][8] =
    {
        {RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER},
        {RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE},
        {RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER},

        {BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE},
        {RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE},

        {GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE},
        {RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER},
        {GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE},
    };

    char * pFirstSquare = &checkerboard[0][0];

    showBoard(pFirstSquare);

    return 0;
}
