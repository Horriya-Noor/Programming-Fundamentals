#include <iostream>
using namespace std;
int main() {
    int i = 0; 
    int j = 0; 
    while (i <= 5) {
        j = 0;
        while (j <= 5) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
	 return 0;
}
