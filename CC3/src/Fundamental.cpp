#include <string>
#include "../include/DoubleHash.h"

#define COUT std::cout
#define ENDL std::endl

int main() {
    // Test 1
    DoubleHash<int, std::string> hash1;
    hash1.insert({76, "First"});
    hash1.insert({40, "Second"});
    hash1.insert({48, "Third"});
    COUT << hash1 << ENDL;


    // Test 2
    DoubleHash<int, std::string> hash2;
    hash2.insert({76, "First"});
    hash2.insert({40, "Second"});
    hash2.insert({48, "Third"});
    hash2.insert({5, "Fourth"});
    hash2.insert({55, "Fifth"});
    COUT << hash2 << ENDL;


    // Test 3
    DoubleHash<int, std::string> hash3;
    hash3.insert({76, "First"});
    hash3.insert({40, "Second"});
    hash3.insert({48, "Third"});
    hash3.insert({5, "Fourth"});
    hash3.insert({55, "Fifth"});
    hash3.insert({10, "Sixth"});
    hash3.insert({18, "Seventh"});
    COUT << hash3 << ENDL;


    // Test 4
    DoubleHash<int, std::string> hash4;
    hash4.insert({76, "First"});
    hash4.insert({40, "Second"});
    hash4.insert({48, "Third"});
    hash4.insert({5, "Fourth"});
    hash4.insert({55, "Fifth"});
    hash4.insert({10, "Sixth"});
    hash4.insert({18, "Seventh"});
    hash4.insert({44, "Eighth"});
    hash4.insert({64, "Ninth"});
    COUT << hash4 << ENDL;
}
