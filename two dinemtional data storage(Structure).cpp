#include <iostream>
using namespace std;
const int item = 5; 
const int month = 12; 

struct Budget {
    string item;
    double m[month]; 
};
int main() {
    Budget y[item];
    y[0].item = "Rent";
    y[1].item = "Electricity";
    y[2].item = "Gas";
    y[3].item = "Water";
    y[4].item = "Internet";
    for (int i = 0; i < item; i++) {
        for (int j = 0; j < month; j++) {
            cout << "Enter monthly budget for " << y[i].item << " in month " << j + 1 << ": ";
            cin >> y[i].m[j];
        }
    }
    cout << "\nYearly Budget:" << endl;
    for (int i = 0; i < item; i++) {
        cout << y[i].item << ": ";
for (int j = 0; j < month;j++) {
            cout << y[i].m[j] << " ";
        }
        cout << endl;
    }

    return 0;
}

