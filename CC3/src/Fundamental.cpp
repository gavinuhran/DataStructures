#include <string>
#include "../include/DoubleHash.h"

#define COUT std::cout
#define ENDL std::endl

int main() {
    DoubleHash<int, std::string> hash;
    hash.insert({76, "First"});
    hash.insert({40, "Second"});
    hash.insert({48, "Third"});

    COUT << hash << ENDL;
}
