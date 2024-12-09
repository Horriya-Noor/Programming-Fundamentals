# include <iostream>
#include <fstream> // Include the fstream header for file operations
using namespace std;
int main() {
    ofstream outfile("filename.txt"); // Create an output file stream object named "outfile"

    if (!outfile.is_open()) { // Check if the file was opened successfully
        cerr << "Error: Could not open file." << endl;
        return 1; // Exit with an error code
    }

    outfile << "This is a sample file.\n" << "Line 1: Hello, World!\n" << "Line 2: File handling in C++."; // Write the content to the file

    outfile.close(); // Close the file

    cout << "File created successfully!" << endl;

    return 0; // Exit successfully
}