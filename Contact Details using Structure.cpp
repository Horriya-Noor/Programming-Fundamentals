#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string address;
    string mobileNumber;
};

int main() {
    Contact contacts[10] = {
        {"Saima Khan", "Lahore", "0321-1234567"},
        {"Ali Hassan", "Karachi", "0333-9876543"},
        {"Sara Ahmed", "Islamabad", "0312-1221122"},
        {"Saad Ullah", "Peshawar", "0345-3334444"},
        {"Sarmad Ali", "Quetta", "0322-5565566"},
        {"Rahim Khan", "Multan", "0331-7778888"},
        {"Faisal Iqbal", "Faisalabad", "0311-9999900"},
        {"Tahir Mahmood", "Sialkot", "0346-2223333"},
        {"Shahid Afridi", "Lahore", "0323-4445555"},
        {"Kamran Akmal", "Lahore", "0332-6667777"}
    };

 
    string searchName;
    cout << "Enter the starting letters of the name to be searched: ";
    cin >> searchName;

    for (int i = 0; i < searchName.length(); i++) {
        searchName[i] = tolower(searchName[i]);
 }

    cout << "Search results:" << endl;
    for (int i = 0; i < 10; i++) {
        string contactName = contacts[i].name;
        for (int j = 0; j < contactName.length(); j++) {
            contactName[j] = tolower(contactName[j]);
        }

        if (contactName.find(searchName) == 0) {
            cout << "Name: " << contacts[i].name << endl;
            cout << "Address: " << contacts[i].address << endl;
            cout << "Mobile Number: " << contacts[i].mobileNumber << endl;
            cout << endl;
        }
    }

    return 0;
}
