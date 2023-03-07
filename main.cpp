#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int id;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;

    cout << "Please enter your student id: ";
    cin >> id;

    cout << "Your student id is: " << id << endl;

    return 0;
}