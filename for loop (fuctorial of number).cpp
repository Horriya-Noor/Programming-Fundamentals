#include <iostream>
using namespace std;

int main() {
    int start = 2;  
    int diff = 3;   
    int terms = 7; 
    for (int i = 0; i < terms; i++) {
        cout << start << " ";
        start += diff;
    }

    return 0;
}

