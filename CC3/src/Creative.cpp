#include "../include/DoubleHash.h"
#include "../include/crypto.h"

#include <string>

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin
#define CERR std::cerr

int main() {
    DoubleHash<std::string, std::string> database;

    bool run = true;
    while (run) {
        // Collect new user information
        COUT << "Please enter a username [no spaces]:  ";
        std::string user;
        if (CIN >> user) {}
        else {
            CERR << "Invalid entry type entered" << ENDL;
            return -1;
        }

        // Check if username is taken
        if (database.contains(user)) {
            CERR << "The username you entered is already registered.";
            return -2;
        }

        COUT << "Please enter a password for " << user << " [no spaces]:  ";
        std::string password;
        if (CIN >> password) {}
        else {
            CERR << "Invalid entry type entered" << ENDL;
            return -1;
        }
        COUT << ENDL << ENDL;


        // Enter new user's info into databse
        COUT << "Entering user " << user << " into the database." << ENDL;
        database.insert({user, encryptDecrypt(password)});


        // Print database to display encyrpted password collection
        COUT << ENDL << database << ENDL << ENDL;


        // Prompt user to add more users or login
        COUT << "Would you like to enter more users? [y/n]:  ";
        char c;
        if (CIN >> c) {}
        else {
            CERR << "Invalid entry type entered" << ENDL;
            return -1;
        }
        if (c == 'y') {
            run = true;
        }
        else if (c == 'n') {
            run = false;
        }
        else {
            CERR << "Please enter y or n.";
        }
        COUT << ENDL;
    }


    // Login sequence
    COUT << "Hello! Please enter your username:  ";
    std::string u;
    if (CIN >> u) {}
    else {
        CERR << "Invalid entry type entered" << ENDL;
        return -1;
    }
    COUT << ENDL;

    // Check if user is in database
    if (!database.contains(u)) {
        CERR << "The username you entered is not registered.";
    }

    // Collect password login infor
    COUT << "Please enter your password:  ";
    std::string pw;
    if (CIN >> pw) {}
    else {
        CERR << "Invalid entry type entered" << ENDL;
        return -1;
    }

    // Check entered password against decrypted hashed password
    if (pw == encryptDecrypt(database[u])) {
        COUT << "Thanks for logging in, " << u << "!";
    }
    else {
        CERR << "The password you entered is incorrect.";
    }
    COUT << ENDL;

    return 0;
}
