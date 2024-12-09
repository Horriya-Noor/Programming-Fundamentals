#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void logActivity(const string& username, const string& action) {
    ofstream outfile("UserLog.txt", ios::app); 

    if (!outfile.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    outfile << "User '" << username << "' " << action << "." << endl;
    outfile.close();
}

void readLogs() {
    ifstream infile("UserLog.txt");

    if (!infile.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    cout << "User Activities Log:" << endl;
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}

int main() {
    logActivity("John", "logged in");
    logActivity("Jane", "accessed the dashboard");
    logActivity("Bob", "performed a file operation");

    readLogs();

    return 0;
}