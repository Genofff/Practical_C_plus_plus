#include <iostream>

bool IsLongsPassword(std::string pass) {
    if (pass.length() < 8)return false;
    return true;
}

bool IsHasSpecialCharacter(std::string pass) {
    int spec_character = 0, array_length = 32;
    char special_character[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '-', '=', '{', '}', '|',
                                '[',
                                ']', '\\', ':', '"', ';', '\'', '<', '>', '?', ',', '.', '/', '~', '`', '\0'};

    for (int i = 0; i < array_length; ++i) {
        for (int c = 0; c < pass.length(); ++c) {
            if (pass[c] == special_character[i]) {
                spec_character++;
                break;
            }
        }
    }
    if (spec_character < 1)return false;
    return true;
}


bool IsHasUpperCase(std::string pass) {
    for (int c = 0; c < pass.length(); ++c) {
        if (isupper(pass[c])) return true;
    }
    return false;
};

bool IsHasLowerCase(std::string pass) {
    for (int c = 0; c < pass.length(); ++c) {
        if (islower(pass[c])) return true;
    }
    return false;
};

bool IsHasDigit(std::string pass) {
    for (int c = 0; c < pass.length(); ++c) {
        if (isdigit(pass[c])) return true;
    }
    return false;
};

int main() {
    std::cout << "Enter password\n";
    std::string pass;
    do {
        getline(std::cin, pass);
        if (!IsLongsPassword(pass)) std::cout << "Password must be 8 characters long;\n";
        if (!IsHasSpecialCharacter(pass)) std::cout << "Password must have at least one Special Character;\n";
        if (!IsHasUpperCase(pass)) std::cout << "Password must have at least one upper-case letter;\n";
        if (!IsHasLowerCase(pass)) std::cout << "Password must have at least one lower-case letter;\n";
        if (!IsHasDigit(pass)) std::cout << "Password must have at least one digit;\n";
        if (IsLongsPassword(pass) && IsHasSpecialCharacter(pass) && IsHasUpperCase(pass) && IsHasLowerCase(pass) &&
            IsHasDigit(pass))
            std::cout << "The password is valid";
    } while (!IsLongsPassword(pass) || !IsHasSpecialCharacter(pass) || !IsHasUpperCase(pass) || !IsHasLowerCase(pass) ||
            !IsHasDigit(pass));
    return 0;
}
