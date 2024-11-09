# include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    int a, b, c, d = 0;
cout << "Enter a positive integer: ";
    cin >> num;
if (num < 0) {
    cout << "Error: Sum of digits is not defined for negative numbers.";
    return 1;
    }
int temp = num;
while (temp != 0) {
    temp /= 10;
    d++;
    }
a = 0;
while (a< d) {
    c = num % 10;
    sum += c;
	num /= 10;
    a++;
    }
cout << "Sum of digits = " << sum << endl;
return 0;
}