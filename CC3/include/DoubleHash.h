#include "LinearProbe.h"

#include <string>

template<class Key, class Value>
class DoubleHash : public HashTable<Key, Value> {
    private:


        // Hash Function 2 for Double Hashing method
        long unsigned int HashFunc2(const int& keyToTranslate) const {
            if (keyToTranslate < 0) {
                return (long unsigned int)(3 - ((-1 * keyToTranslate) % 3));
            }
            else {
                return (long unsigned int)(3 - (keyToTranslate % 3));
            }
        }


        // Hash function 2 for Double Hashing Method
        long unsigned int HashFunc2(const std::string& keyToTranslate) const {
            return (long unsigned int)(3 - (keyToTranslate.size() % 3));
        }


        // Revised findPos method for Double Hash method
        long unsigned int findPos(const Key& theKey) const {
            long unsigned int currentPos;
            long unsigned int iter = 1;

            do {
                // Hash Function determines current position
                currentPos = (this->HashFunc(theKey) + iter*HashFunc2(theKey)) % this->array.capacity();
                ++iter;
            }
            while (
                this->array.at(currentPos).state != EMPTY
                && this->array.at(currentPos).state != DELETED
                && this->array.at(currentPos).key != theKey
                && iter < this->array.capacity()
            );

            // Return capacity if the current value isn't the key. For safety
            if (this->array.at(currentPos).state == ACTIVE
                && this->array.at(currentPos).key != theKey) {
                    return this->array.capacity();
                }

            return currentPos;
        }

      public:

          // Default constructor for Double Hash
          DoubleHash<Key, Value>() : HashTable<Key, Value>() {};


          // Revised constructor for Double Hash, calling upon a Hash Table
          DoubleHash<Key, Value>(const unsigned int size) : HashTable<Key, Value>(size) {};


          // Destructor for Double Hash class
          virtual ~DoubleHash<Key, Value>() {}

          // Revised output stream for Double Hash classes
          friend std::ostream& operator<<(std::ostream& output, const DoubleHash<Key, Value>& theTable) {
              output << "Double Hash Size: " << theTable.array.size() << std::endl;
              output << "Hashed Elements: " << theTable.numHash << std::endl;

              for(unsigned int iter = 0; iter < theTable.array.size(); iter++) {
                  output << "{" << iter << ": ";

                  if (theTable.array[iter].state == ACTIVE) {
                      output << "ACTIVE, ";
                  }
                  else if (theTable.array[iter].state == DELETED) {
                      output << "DELETED, ";
                  }
                  else {
                      output << "EMPTY, ";
                  }

                  output << theTable.array[iter].key << ", ";
                  output << theTable.array[iter].value << "}" << std::endl;
              }

              return output;
          }
};
