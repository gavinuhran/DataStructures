#include <iostream>
#include <vector>

#define COUT std::cout
#define ENDL std::endl

// Simple function designed to print the contents of a vector
template <class T>
void printVector(std::vector<T>& array) {
    COUT << "Final is:\t";
    for (int i = 0; i < (int)array.size(); ++i) {
        COUT << array.at(i) << "  ";
    }
    COUT << ENDL;
}

// Simple function designed to swap values at any two indices in a vector
template <class T>
void swap(std::vector<T>& array, int x, int y) {
    T temp = array.at(x);
    array.at(x) = array.at(y);
    array.at(y) = temp;
}

template <class T>
void quickSort(std::vector<T>& array, int start, int end) {
    // Check to make sure the start and end positions make sense
    if (start >= end) {
      return;
    }

    int lo = start;
    int left = start + 1;
    int right = end;

    while (left <= right) {
        // Increment left while less than partition and in bounds
        while (array.at(left) < array.at(lo) && left != end) {
            left++;
        }

        // Decrement right while greater than partition and in bounds
        while (array.at(right) >= array.at(lo) && right != start) {
            right--;
        }

        // If left and right have not crossed, swap left and right values
        if (left < right) {
            swap(array, left, right);
        }
        // Else, swap partition and right values
        else {
            swap(array, lo, right);
        }
    }

    // Sort the left side, including the partition
    quickSort(array, start, right);
    // Sort the right side, excluding the partition
    quickSort(array, right + 1, end);
}
