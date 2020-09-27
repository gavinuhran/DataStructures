#include <iostream>
#include <cstdlib>

// Added queue class 
#include "../include/Queue.h"

#define COUT std::cout
#define ENDL std::endl

#define SIZE 5

struct SearchNode {
	int r;
	int c;
	
	SearchNode() : r(), c() {}
	SearchNode(int rIn, int cIn) : r(rIn), c(cIn) {}
};

bool isValid(int matrix[][SIZE], bool visited[][SIZE], int r1, int c1, int r2, int c2) {
    return (r2 >= 0)
            && (r2 < SIZE)
            && (c2 >= 0)
            && (c2 < SIZE)
            && (matrix[r2][c2] <= matrix[r1][c1])
            && (!visited[r2][c2]);
}

bool doesPathExist(int matrix[][SIZE], int r, int c) {
    // Make sure input is validIZ
    if ( r != (SIZE-1) && c != (SIZE-1) ) {
        COUT << "Entered location is not next to the Atlantic Ocean." << ENDL;
    }

    // Initialize visited matrix
    bool visited[SIZE][SIZE] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Initialize queue
    queue<SearchNode> theQueue;

    // Mark initial pos as visited
    visited[r][c] = true;

    // Add initial pos to queue
    theQueue.push({r, c});


    // While queue is not empty
    while (!theQueue.empty()) {

        // Pop queue
        SearchNode temp = theQueue.front();
        int row = temp.r;
        int col = temp.c;
        theQueue.pop();

        // Check if pos is next to Pacific Ocean
        if (row == 0 || col == 0) {
            return true;
        }

        // Check if top is valid
        if (isValid(matrix, visited, row, col, row - 1, col)) {
            // Add top to visited
            visited[row - 1][col] = true;
            // Add top to queue
            theQueue.push({row - 1, col});
        }

        // Check left is valid
        if (isValid(matrix, visited, row, col, row, col - 1)) {
            // Add top to visited
            visited[row][col - 1] = true;
            // Add top to queue
            theQueue.push({row, col - 1});
        }

        // Check right is valid
        if (isValid(matrix, visited, row, col, row, col + 1)) {
            // Add top to visited
            visited[row][col + 1] = true;
            // Add top to queue
            theQueue.push({row, col + 1});
        }

        // Check bottom is valid
        if (isValid(matrix, visited, row, col, row + 1, col)) {
            // Add top to visited
            visited[row + 1][col] = true;
            // Add top to queue
            theQueue.push({row + 1, col});
        }
    }
    return false;
}

void findShores(int matrix[][SIZE]) {
    COUT << ENDL << "Atlantic Shore positions with path to the Pacific Ocean:  " << ENDL;
	for (int r = 0; r < SIZE - 1; r++) {
		if (doesPathExist(matrix, r, SIZE-1)) {
			COUT << "[" << r << ", " << (SIZE - 1) << "]" << ENDL;
		}
	}
    for (int c = 0; c < SIZE; c++) {
		if (doesPathExist(matrix, SIZE-1, c)) {
			COUT << "[" << (SIZE - 1) << ", " << c << "]" << ENDL;
		}
	}
	COUT << ENDL;
}

int main() {

    // Test on example
    int mEX[SIZE][SIZE] = {
        {1, 3, 4, 3, 7},
		{2, 2, 3, 4, 4},
		{2, 4, 5, 3, 1},
		{6, 7, 5, 4, 5},
		{5, 1, 6, 2, 4}
    };
    findShores(mEX);

    // Unique Test 1
    int m1[SIZE][SIZE] = {
        {6, 6, 2, 1, 5},
		{7, 1, 3, 3, 5},
		{9, 6, 8, 1, 6},
		{4, 9, 1, 6, 5},
		{8, 8, 9, 9, 2}
    };
    findShores(m1);

    // Unique Test 2
    int m2[SIZE][SIZE] = {
        {9, 8, 7, 6, 6},
		{8, 7, 6, 5, 4},
		{7, 6, 5, 4, 3},
		{6, 5, 4, 3, 2},
		{5, 4, 3, 2, 1}
    };
    findShores(m2);
	
	return 0;
}