#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check number (0–9)
    if (ch >= '0' && ch <= '9') {
        cout << "It is a number";
    }
    // Check alphabet (A–Z or a–z)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

        // Convert uppercase to lowercase (manual)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u') {
            cout << "It is a vowel";
        }
        else {
            cout << "It is a consonant";
        }
    }
    else {
        cout << "It is a special character";
    }

    return 0;
}
