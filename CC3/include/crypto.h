#include <string>

std::string encryptDecrypt(std::string toEncrypt) {
    char key = 'G'; //Any char will work
    std::string output = toEncrypt;

    for (long unsigned int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;

    return output;
}
