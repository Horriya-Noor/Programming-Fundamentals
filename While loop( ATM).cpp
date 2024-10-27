#include<iostream>
using namespace std;
int main(){
int balance, withdraw;
    cout << "Enter your balance: ";
    cin >> balance;
 while (true) {
        cout << "Withdraw amount : ";
        cin >> withdraw;
if (withdraw == 0) {
            break;}
if (withdraw >=balance) {
        cout << "Not enough balance." << endl;
            break;}
			balance-=withdraw;
    	cout << "Remaining balance: " << balance << endl;
    }
		cout << "No amount left in your account "<< endl;
return 0;}

Output:



