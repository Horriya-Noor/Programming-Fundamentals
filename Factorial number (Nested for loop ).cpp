#include <iostream>
using namespace std;
int main() {
    int num, fact = 1;
cout << "Enter a positive integer: ";
cin >> num;
for (int i = 1; i <= num; i++) {
    fact *= i;
}
 if (num < 0) {
 cout << "Error: Factorial is not defined for negative numbers.";
}
cout << "Factorial of " << num << " = " << fact << endl;
return 0;
}