#include <iostream>
#include <vector>
#include <string>

#define COUT std::cout
#define ENDL std::endl

template <class T>
void printStudents(std::vector<T>& students, std::vector<T>& sortedStudents) {
    COUT << "Original Order of Papers:\t\tSorted Order of Papers:" << ENDL;
    for (int i = 0; i < (int)students.size(); ++i) {
        if ((int)students.at(i).length() <= 7) {
            COUT << students.at(i) << "\t\t\t\t\t" << sortedStudents.at(i) << ENDL;
        }
        else {
            COUT << students.at(i) << "\t\t\t\t" << sortedStudents.at(i) << ENDL;
        }
    }
}

template <class T>
void swap(std::vector<T>& array, int x, int y) {
    T temp = array.at(x);
    array.at(x) = array.at(y);
    array.at(y) = temp;
}

template <class T>
void quickSort(std::vector<T>& array, int start, int end) {
    if (start >= end) {
        return;
    }

    int lo = start;
    int left = start + 1;
    int right = end;

    while (left <= right) {
        while (array.at(left) < array.at(lo) && left != end) {
            left++;
        }
        while (array.at(right) >= array.at(lo) && right != start) {
            right--;
        }

        if (left < right) {
            swap(array, left, right);
        }
        else {
            swap(array, lo, right);
        }
    }

    quickSort(array, start, right);
    quickSort(array, right + 1, end);
}
