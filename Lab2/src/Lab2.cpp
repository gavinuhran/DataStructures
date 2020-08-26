#include "../include/functions.h"

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl

int main() {
    // TEST 1
    COUT << "--------------------" << ENDL;
    COUT << "First Test:" << ENDL;
    COUT << "Array to Test for LIS \t:  10 9 2 5 3 7 101 18" << ENDL;
    std::vector<int> a1{10, 9, 2, 5, 3, 7, 101, 18};
    int a1Result = longestIncreasingSubsequence(a1);
    if (a1Result == 0) {
        COUT << "List is Empty";
    }
    COUT << "Result:  " <<  a1Result << ENDL;


    // TEST 2
    COUT << "--------------------" << ENDL;
    COUT << "Second Test:" << ENDL;
    COUT << "Array to Test for LIS \t:  10 5 8 3 9 4 12 11" << ENDL;
    std::vector<unsigned int> a2{10, 5, 8, 3, 9, 4, 12, 11};
    int a2Result = longestIncreasingSubsequence(a2);
    if (a2Result == 0) {
        COUT << "List is Empty";
    }
    COUT << "Result:  " <<  a2Result << ENDL;


    // TEST 3
    COUT << "--------------------" << ENDL;
    COUT << "Third Test:" << ENDL;
    COUT << "Array to Test for LIS \t:  e A B a C f D E" << ENDL;
    std::vector<char> a3{'e', 'A', 'B', 'a', 'C', 'f', 'D', 'E'};
    int a3Result = longestIncreasingSubsequence(a3);
    if (a3Result == 0) {
        COUT << "List is Empty";
    }
    COUT << "Result:  " <<  a3Result << ENDL;


    // TEST 4
    COUT << "--------------------" << ENDL;
    COUT << "Fourth Test:" << ENDL;
    COUT << "Array to Test for LIS \t:  6 7 8 9 1 2 3 4 5" << ENDL;
    std::vector<unsigned int> a4{6, 7, 8, 9, 1, 2, 3, 4, 5};
    int a4Result = longestIncreasingSubsequence(a4);
    if (a4Result == 0) {
        COUT << "List is Empty";
    }
    COUT << "Result:  " <<  a4Result << ENDL;


    // TEST 5
    COUT << "--------------------" << ENDL;
    COUT << "Fifth Test:" << ENDL;
    COUT << "Array to Test for LIS \t:  Hello, name is Gavin Uhran." << ENDL;
    std::vector<std::string> a5{"Hello,", "my", "name", "is", "Gavin", "Uhran."};
    int a5Result = longestIncreasingSubsequence(a5);
    if (a5Result == 0) {
        COUT << "List is Empty";
    }
    COUT << "Result:  " <<  a5Result << ENDL;


    // TEST 6
    COUT << "--------------------" << ENDL;
    COUT << "Sixth Test:" << ENDL;
    COUT << "Array to Test for LIS \t:  9 8 7 6 5 4 3 2 1" << ENDL;
    std::vector<int> a6{9, 8, 7, 6, 5, 4, 3, 2, 1};
    int a6Result = longestIncreasingSubsequence(a6);
    if (a6Result == 0) {
        COUT << "List is Empty";
    }
    COUT << "Result:  " <<  a6Result << ENDL;

}
