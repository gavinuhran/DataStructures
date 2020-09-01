#include "LinearProbe.h"
#include <string>

#define COUT std::cout
#define ENDL std::endl

template<class Key, class Value>
void addFreqs(HashTable<Key, Value>& freqs, std::string& s) {
    for (int i = 0; i < (int)s.size(); ++i) {
        if (freqs.contains(s[i])) {
            int prevFreq = freqs[s[i]];
            freqs.remove(s[i]);
            freqs.insert({s[i], prevFreq + 1});
        }
        else {
            freqs.insert({s[i], 1});
        }
    }
}

template<class Key, class Value>
bool removeFreqs(HashTable<Key, Value>& freqs, std::string& s) {
    for (int i = 0; i < (int)s.size(); ++i) {
        if (freqs.contains(s[i])) {
            int prevFreq = freqs[s[i]];

            if (prevFreq == 0) {  // Checks if
              return true;
            }

            freqs.remove(s[i]);
            freqs.insert({s[i], prevFreq - 1});
        }
        else {
            return true;
        }
    }
    return false;
}

template<class Key, class Value>
bool isEmpty(HashTable<Key, Value>& freqs, std::string& s) {
    for (int i = 0; i < (int)s.size(); ++i) {
        if (freqs.contains(s[i])) {
            if (freqs[s[i]] != 0) {
                return false;
            }
        }
        else {
            return false;
        }
    }
    return true;
}

bool isAnagram(std::string& s1, std::string& s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    // Initialize a hash table
    HashTable<char, int> freqs;

    // Fill hash table with frequencies of chars in s1
    addFreqs(freqs, s1);

    // Remove occurences of chars in s2 from hashmap, while also checking if frequency of a char dips below zero
    if (removeFreqs(freqs, s2)) {
        return false;
    }

    // Checks if any chars from s1 have a frequency not equal to zero
    return isEmpty(freqs, s1);
}
