#include "pascal.h"
#include "pascal.cpp"
#include <iostream>

#define CIN std::cin
#define CERR std::cerr

bool callForUserValue(int** pascalTriangle, int numLevels) {
    int row, col;
    COUT << "Enter a row and column value to print [two numbers only]:  ";
    CIN >> row >> col;

    if (row > numLevels || col > numLevels) {
        CERR << "The entered row or column is outside the range of the Pascal Triangle." << ENDL << ENDL;
        return true;
    }
    else {
        COUT << getValue(pascalTriangle, row, col) << ENDL << ENDL;
    }

    char c;
    while (true) {
        COUT << "Continue? [y/n]:  ";
        CIN >> c;

        if (!(c == 'y' || c == 'n')) {
            CERR << "An invalid answer was entered.";
        }
        else {
            COUT << ENDL;
            break;
        }
    }

    return c == 'y';
}

int main() {
    int numLevels;
    COUT << "Enter the number of levels you would like to calculate:  ";
    CIN >> numLevels;

    if (numLevels < 1) {
        CERR << "An invalid number of levels was entered." << ENDL;
        return -1;
    }

    COUT << ENDL;
    int** pascalTriangle = generatePascal(numLevels);
    COUT << ENDL;

    bool run = true;
    while (run) {
        run = callForUserValue(pascalTriangle, numLevels);
    }

    free(pascalTriangle);

    return 0;
}
