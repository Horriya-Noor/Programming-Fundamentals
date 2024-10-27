# include <iostream>
using namespace std;
int main() {
	int num = 34;
    int usernum;
    int attempts = 0;

    do {
        cout << "Guess the secret number (1-100): ";
        cin >> usernum;
        attempts++;
        if (usernum == num) {
        cout << " Congratulations! You guessed it " << attempts << " attempts.\n";
        } else if (usernum < num) {
        cout << "Too low! Try again."<<endl;
 } else {
        cout << "Too high! Try again."<<endl;
        }
    } while (usernum != num);

    return 0;
}




