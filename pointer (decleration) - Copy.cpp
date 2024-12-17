#include <iostream>
using namespace std;

int main() {
 
    int var = 10;

    int* ptr;

    ptr = &var;


  cout << "Value of variable: " << var << endl;

  cout << "Address of variable: " << &var << endl;

  cout << "Value stored in pointer: " << ptr << endl;

  cout << "Value at address stored in pointer: " << *ptr << endl;

    return 0;
}

