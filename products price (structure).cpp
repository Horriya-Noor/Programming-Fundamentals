#include <iostream>
#include <string>

using namespace std;

struct Product {
    int code;
    string description;
    char packaging;
    float price;
    float discount;
};

int main() {
    Product products[10] = {
        {1, "Product 1", 'L', 500.0, 2.0},
        {2, "Product 2", 'S', 200.0, 5.0},
        {3, "Product 3", 'M', 300.0, 3.0},
        {4, "Product 4", 'L', 800.0, 1.0},
        {5, "Product 5", 'S', 150.0, 4.0},
        {6, "Product 6", 'M', 400.0, 2.5},
        {7, "Product 7", 'L', 900.0, 1.5},
        {8, "Product 8", 'S', 250.0, 3.5},
        {9, "Product 9", 'M', 350.0, 2.0},
        {10, "Product 10", 'L', 700.0, 1.0}
    };

    cout << "Products in Large packaging with net price between 200-1000:" << endl;
    for (int i = 0; i < 10; i++) {
        if (products[i].packaging == 'L') {
            float netPrice = products[i].price - (products[i].price * products[i].discount / 100);
            if (netPrice >= 200 && netPrice <= 1000) {
                cout << "Code: " << products[i].code << endl;
                cout << "Description: " << products[i].description << endl;
                cout << "Packaging: " << products[i].packaging << endl;
                cout << "Original Price: " << products[i].price << endl;
                cout << "Discount: " << products[i].discount << "%" << endl;
                cout << "Net Price: " << netPrice << endl;
                cout << endl;
            }
        }
    }

    return 0;
}