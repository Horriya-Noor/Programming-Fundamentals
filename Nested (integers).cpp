#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter an integer: ";
    cin >> i;

    if (i>100) {
        cout << "The number is Large.";
    } else if (i>0) {
        if (i<100)
            cout << "The number is small.";
        else
            cout << "The number s zero.";
    } else if (i<0) {
        if (i>-100)
            cout << "The number is very small.";
        else
            cout <<"The number is small and negative." ;
    } else if (i==0) {
        cout << "The number is zero.";
    } else {
        cout << "This is uninquired data.";
    }
    return 0;
}
