#include <iostream>
using namespace std;

int main() {
    // Variables to hold marks
    float mark1, mark2, mark3, average;

    // Prompt user to enter marks for 3 subjects
    cout << "Enter marks for Subject 1: ";
    cin >> mark1;
    cout << "Enter marks for Subject 2: ";
    cin >> mark2;
    cout << "Enter marks for Subject 3: ";
    cin >> mark3;

    // Calculate average
    average = (mark1 + mark2 + mark3) / 3;

    // Display the average
    cout << "Average marks = " << average << endl;

    // Determine grade using if-else
    if (average >= 70 && average <= 100) {
        cout << "Grade: A" << endl;
    } else if (average >= 60) {
        cout << "Grade: B" << endl;
    } else if (average >= 50) {
        cout << "Grade: C" << endl;
    } else if (average >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E (Fail)" << endl;
    }

    return 0;
}