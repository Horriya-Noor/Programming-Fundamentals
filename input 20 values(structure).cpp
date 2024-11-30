#include <iostream>
using namespace std;

void findGreatest() {
    int greatest = INT_MIN; 
    int value;

    cout << "Enter 20 values: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> value;
        if (value > greatest) {
            greatest = value;
        }
    }

    cout << "The greatest value is: " << greatest << endl;
}

int main() {
    findGreatest();
    return 0;
}
