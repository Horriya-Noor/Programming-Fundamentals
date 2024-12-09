#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outfile("output.txt"); // Create an output file stream object

    if (!outfile.is_open()) { // Check if the file was opened successfully
        cerr << "Error: Could not open file." << endl;
        return 1; // Exit with an error code
    }

    outfile << "Line 1: Writing to a file in C++." << endl; // Write the first line
    outfile << "Line 2: File handling is essential for data manipulation." << endl; // Write the second line

    outfile.close(); // Close the file

    cout << "File created successfully!" << endl;

    return 0; // Exit successfully
}