#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if triangle is valid
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            cout << "The triangle is Equilateral";
        }
        else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles";
        }
        else {
            cout << "The triangle is Scalene";
        }

    } else {
        cout << "Invalid triangle";
    }

    return 0;
}
