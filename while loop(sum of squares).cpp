#include <iostream>
using namespace std;
int sumOfSquares(int n) {
    int sum = 0;
    int i = 1;
    do {
        sum += i * i;
        i++;
    } while (i <= n);
    return sum;
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n <= 0) {
        cout << "Please enter a positive integer: ";
 cin >> n;
    }
	 int result = sumOfSquares(n);
    cout << "The sum of squares of the first " << n << " natural numbers is: " << result << endl;

    return 0;
}

