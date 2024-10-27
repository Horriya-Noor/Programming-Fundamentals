# include <iostream>
using namespace std;
int main(){
	string correctPassword = "great122"; 
    int attempts = 0; 
    int maxAttempts = 3;
    string inputPassword; 
    char passwordCorrect = false; 

    do {
        cout << "Enter your password: ";
        cin >> inputPassword;

        if (inputPassword == correctPassword) {
            passwordCorrect = true;
            cout << "Password correct. Access granted."<<endl;
        } else {
            attempts++;
            cout << "Password incorrect. Attempts left: " << maxAttempts - attempts << "\n";
        }
    } while (!passwordCorrect && attempts < maxAttempts);

    if (!passwordCorrect) {
    	cout << "Maximum attempts reached. Access denied.\n";

}
return 0;
}