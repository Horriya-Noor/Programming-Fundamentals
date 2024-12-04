# include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double temp[] = {1.0, 10.0, 15.0, 20.0, 25.0, 30.0};
    int numValues = sizeof(temp) / sizeof(temp[0]);

    for (int i = 0; i < numValues; i++) {
        double fahrenheit = celsiusToFahrenheit(temp[i]);
        cout << temp[i] << " C is equal to " << fahrenheit << " F" <<endl;
    }

    return 0;
}

