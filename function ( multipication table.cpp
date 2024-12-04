#include <iostream>
using namespace std;

void table(int num, int counting) {
    cout << "Multiplication Table of " << num << " up to " << counting << ":" << endl;
    for (int i = 1; i <= counting; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int num,counting;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the range: ";
    cin >> counting;
    table(num, counting);
    return 0;
}
