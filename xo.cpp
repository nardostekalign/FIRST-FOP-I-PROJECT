#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <algorithm>
using namespace std;

bool isValidName(const string& name) {
    if (name.empty()) return false;
    for (char c : name) {
        unsigned char uc = static_cast<unsigned char>(c);
        if (!isalpha(uc) && !isspace(uc)) {
            return false;
        }
    }
    return true;
}