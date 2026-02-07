#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total;

    cout << "Enter number of items: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    total = quantity * price;

    if (quantity > 1000) {
        total = total - (total * 0.10);   // 10% discount
    }

    cout << "Total expense: " << total << endl;

    return 0;
}
