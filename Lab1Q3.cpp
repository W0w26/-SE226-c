#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int lab_grade, midterm_grade, final_grade;
    double last_score;

    cout << "Please enter the student's name: ";
    getline(cin, name);
    cout << "Please enter the student's lab grade (out of 100): ";
    cin >> lab_grade;
    cout << "Please enter the student's midterm grade (out of 100): ";
    cin >> midterm_grade;
    cout << "Please enter the student's final grade (out of 100): ";
    cin >> final_grade;

    last_score = 0.25 * lab_grade + 0.35 * midterm_grade + 0.4 * final_grade;

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab_grade << endl;
    cout << "Midterm: " << midterm_grade << endl;
    cout << "Final: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;

    return 0;
}