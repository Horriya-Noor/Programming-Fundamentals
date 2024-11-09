# include <iostream>
using namespace std;
int main() {
    int num, fact = 1;
    int i = 1;  
	cout << "Enter a positive integer: ";
    cin >> num;
if (num < 0) {
    cout << "Error: Factorial is not defined for negative numbers.";
}
while (i <= num) {
        fact *= i;
        i++;
}
cout << "Factorial of " << num << " = " << fact << endl;
return 0;
}


Output: