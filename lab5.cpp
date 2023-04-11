#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", "kiwi", "lemon"};

std::string passGen(int numWords) {
    if (numWords < 3 || numWords > 7) {
        return "Invalid number of words. Please choose a number between 3 and 7, inclusive.";
    }
    std::string password = "";
    for (int i = 0; i < numWords; i++) {
        password += words[rand() % words.size()];
    }
    std::reverse(password.begin(), password.end());
    return password;
}

std::string repWithUpper(std::string str) {
    char randomChar = str[rand() % str.length()];
    std::replace(str.begin(), str.end(), randomChar, toupper(randomChar));
    return str;
}

std::string swapLetters(std::string str) {
    std::swap(str[0], str[str.length() - 2]);
    std::swap(str[1], str[str.length() - 1]);
    return str;
}

bool searchLetter(std::string source, char key) {
    return std::find(source.begin(), source.end(), key) != source.end();
}

int main() {
    srand(time(NULL));
    int numWords;
    std::cout << "Enter the number of words for the password (between 3 and 7, inclusive): ";
    std::cin >> numWords;

    std::string password = passGen(numWords);
    std::cout << "Initial password: " << password << std::endl;

    password = repWithUpper(password);
    std::cout << "Password after repWithUpper: " << password << std::endl;

    password = swapLetters(password);
    std::cout << "Final password: " << password << std::endl;

    bool result = searchLetter(password, 'C');
    std::cout << "Is 'C' in the password? " << (result ? "Yes" : "No") << std::endl;

    return 0;
}

