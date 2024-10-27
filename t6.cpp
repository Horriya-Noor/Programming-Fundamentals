#include <iostream>
using namespace std;

int main() {
    double score;

    cout << "Enter exam score (out of 100): ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        if (score >= 85) {
            cout << "Grade: B+" << endl;
        } else {
            cout << "Grade: B" << endl;
        }
    } else if (score >= 70) {
        if (score >= 75) {
            cout << "Grade: C+" << endl;
        } else {
            cout << "Grade: C" << endl;
        }
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
