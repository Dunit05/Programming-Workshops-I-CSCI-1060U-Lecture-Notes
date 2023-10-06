#include <iostream>

// Write a function named "isValidPassword" that validates whether a given password meets certain criteria, such as a minimum length of 8 characters and the presence of at least one special character. Create at least three test cases with different inputs, including valid and invalid passwords, to verify the function's behavior. For example:

// Test Case 1 : Input : "P@ssw0rd", Expected Output : true Test Case 2 : Input : "password123", Expected Output : false Test Case 3 : Input : "abc123", Expected Output : false

bool isValidPassword(std::string password) {
    bool hasSpecial = false;
    for (int i = 0; i < password.length(); i++) {
        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*') {
            hasSpecial = true;
        }
    }
    return password.length() >= 8 && hasSpecial;
}

int main() {
    std::cout << isValidPassword("P@ssw0rd") << std::endl;
    std::cout << isValidPassword("password123") << std::endl;
    std::cout << isValidPassword("abc123") << std::endl;
}