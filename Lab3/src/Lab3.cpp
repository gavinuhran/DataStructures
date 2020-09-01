#include "../include/Anagram.h"

void testAnagram(std::string& s1, std::string& s2) {
    COUT << "--------------------------------------------------" << ENDL << ENDL;
    if (isAnagram(s1, s2)) {
        COUT << s1 << " and " << s2 << " are anagrams!" << ENDL;
    }
    else {
        COUT << s1 << " and " << s2 << " are NOT anagrams." << ENDL;
    }
    COUT << ENDL;
}

int main() {
    std::string test1a = "hello";
    std::string test1b = "olleh";
    testAnagram(test1a, test1b);

    std::string test2a = "hello";
    std::string test2b = "gavin";
    testAnagram(test2a, test2b);

    std::string test3a = "helloimgavinuhran";
    std::string test3b = "higuemahlvrliaonn";
    testAnagram(test3a, test3b);

    std::string test4a = "helloimgavinuhran";
    std::string test4b = "pleasereturnfalse";
    testAnagram(test4a, test4b);

    return 0;
}
