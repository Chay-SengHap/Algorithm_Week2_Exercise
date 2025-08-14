#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double calculateTotal(double prices[]) {
    double total = 0;
    for (int i = 0; i < 3; i++) {
        total += prices[i];
    }
    return total;
}

int main() {
    string products[3];
    double prices[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter product " << i+1 << " name: ";
        cin >> products[i];
        cout << "Enter product " << i+1 << " price: ";
        cin >> prices[i];
    }

    double total = calculateTotal(prices);

    double* pricePtr = &prices[0];
    *pricePtr *= 1.1;

    ofstream outFile("products.txt");
    for (int i = 0; i < 3; i++) {
        outFile << products[i] << ": " << prices[i] << endl;
    }
    outFile << "Total: " << total << endl;
    outFile.close();

    ifstream inFile("products.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}

// Ex7.   Write a C++ program that: 
// 1.  Asks the user for 3 products (name and price). 
// 2.  Stores product names in a string array and prices in a double array. 
// 3.  Uses a function to calculate the total price. 
// 4.  Uses a pointer to update the price of one product. 
// 5.  Saves the product list and total price to products.txt. 
// 6.  Reads back from the file and displays the list. 
