#include <vector>
#include <string>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

template <class T>
int search(std::vector<T>& array, int start, int end, T value) {
    while (end - start > 1) {
        int mid = start + (end - start) / 2;
        if (array.at(mid) >= value)
            end = mid;
        else
            start = mid;
    }
    return end;
}

template <class T>
int longestIncreasingSubsequence(std::vector<T>& array)
{
    if ((int)array.size() == 0) {
        return 0;
    }

    std::vector<T> encountered(array.size(), array.at(0));
    int length = 1;

    encountered.at(0) = array.at(0);

    for (int i = 1; i < (int)array.size(); i++) {
        T temp = array.at(i);
        if (array.at(i) < encountered.at(0)) {
            encountered.at(0) = temp;
        }
        else if (array.at(i) > encountered.at(length - 1)) {
            encountered.at(length) = temp;
            length++;
        }
        else {
          int n = search(encountered, -1, length - 1, temp);
          encountered.at(n) = temp;
        }
    }
    return length;
}
