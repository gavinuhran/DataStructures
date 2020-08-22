#include "pascal.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl


void printPascal(int** pascal, int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            COUT << pascal[i][j] << "\t";
        }
        COUT << ENDL;
    }
}

int** generatePascal(int numRows) {
    // Allocating memory
    int** rows = new int* [numRows];

    for (int i = 0; i < numRows; ++i) {
        rows[i] = new int [i+1];
    }

    // Calculating pascal triangle
    for (int n = 0; n < numRows; n++) {
        // Sets end values = 1
        rows[n][0] = 1;
        rows[n][n] = 1;

        if (n != 0) {
            rows[n][1] = n;
            rows[n][n-1] = n;
        }

        for (int i = 2; i <= n/2; i++) {
            int temp = rows[n-1][i-1] + rows[n-1][i];
            rows[n][i] = temp;
            rows[n][n-i] = temp;
        }
    }

    printPascal(rows, numRows);

    return rows;
}

int getValue(int** pascal, int row, int col) {
    return pascal[row-1][col-1];
}
