#include <iostream>
using namespace std;
struct Currency {
    string type;
    double r;
};

int main() {
    Currency usd = {"USD", 1.0}; 
    Currency pk = {"PKR", 221.5}; 
	double amount; 
    cout << "Currency Converter Program" << endl;
    cout << "---------------------------" << endl;

    cout << "Enter the amount in USD: ";
    cin >> amount;
    double pamount = amount * pk.r;
    cout << amount << " USD is equal to " << pamount << " PKR" << endl;
	return 0;
}
