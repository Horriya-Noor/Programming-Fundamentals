#include <iostream>
using namespace std;

int main() {
    char a;
    double b;
    cout << "Bank Operations Menu:" << endl;
    cout << "D= Deposit"<<endl;
    cout<< "W= Withdraw"<<endl;
     cout<<"T= Transfer"<<endl;
     
     cout << "Bank Operations Menu:" << endl;
    cin >> a;
    cout << "Enter your amount:" << endl;
    cin >>b;
    
    switch (a) {
        case 'D':
        case 'd':
            cout << "Net Amount: " << b<< endl;
            cout << "Remaining Balance: " <<b-(0.5/100)<< endl;
            break;
        case 'W':
        case 'w':
            cout << "Net Amount: " << b << endl;
            cout << "Remaining Balance: " <<b-(1.5/100)<< endl;
            break;
        case 'T':
        case 't':
            cout << "Net Amount: " << b << endl;
            cout << "Remaining Balance: " << b-(2.5/100)<< endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}

    
   
