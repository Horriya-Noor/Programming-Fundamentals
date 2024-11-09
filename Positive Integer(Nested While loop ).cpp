#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
cout << "Enter a positive integer: ";
cin >> num;
if (num < 0) {
    cout << "Error: Sum of digits is not defined for negative numbers.";
}
while (num != 0) {
    sum += num % 10;
    num /= 10;
}
cout << "Sum of digits = " << sum << endl;
return 0;
}