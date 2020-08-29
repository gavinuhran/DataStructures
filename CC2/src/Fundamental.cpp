#include "../include/Quick.h"

int main() {
    // Test 1: An even number of elements
    COUT << "--------------------" << ENDL;
    COUT << "Test 1:\t\tEven number of elements" << ENDL;
    COUT << "Initial:\t7  8  9  6  5  2  0  1  4  3" << ENDL;
    COUT << "Length:\t\t10 elements" << ENDL;
    std::vector<int> a1{7, 8, 9, 6, 5, 2, 0, 1, 4, 3};
    quickSort(a1, 0, (int)a1.size() - 1);
    printVector(a1);

    // Test 2: An odd number of elements
    COUT << "--------------------" << ENDL;
    COUT << "Test 2:\t\tOdd number of elements" << ENDL;
    COUT << "Initial:\t7  8  9  6  5  2  1  4  3" << ENDL;
    COUT << "Length:\t\t9 elements" << ENDL;
    std::vector<int> a2{7, 8, 9, 6, 5, 2, 1, 4, 3};
    quickSort(a2, 0, (int)a2.size() - 1);
    printVector(a2);

    // Test 3: An integer vector
    COUT << "--------------------" << ENDL;
    COUT << "Test 3:\t\tIntegers" << ENDL;
    COUT << "Initial:\t5  7  9  3  1  8  4  2  6" << ENDL;
    std::vector<int> a3{5, 7, 9, 3, 1, 8, 4, 2, 6};
    quickSort(a3, 0, (int)a3.size() - 1);
    printVector(a3);

    // Test 1: An even number of elements
    COUT << "--------------------" << ENDL;
    COUT << "Test 4:\t\tCharacters" << ENDL;
    COUT << "Initial:\tT  H  E  C  O  R  O  N  A  V  I  R  U  S  S  U  C  K  S" << ENDL;
    std::vector<char> a4{'T','H','E','C','O','R','O','N','A','V','I','R','U','S','S','U','C','K','S'};
    quickSort(a4, 0, (int)a4.size() - 1);
    printVector(a4);
}
