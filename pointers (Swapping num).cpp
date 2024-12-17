#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

	cout << "Enter first number";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	cout << "Original values:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

 
    swap(&num1, &num2);

   cout << "Swapped values:" << std::endl;
   cout << "num1 = " << num1 << std::endl;
   cout << "num2 = " << num2 << std::endl;

    return 0;
}
