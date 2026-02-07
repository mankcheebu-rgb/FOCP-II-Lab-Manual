#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter score of Player 1: ";
    cin >> a;

    cout << "Enter score of Player 2: ";
    cin >> b;

    cout << "Enter score of Player 3: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "Player 1 is the winner";
    }
    else if (b > a && b > c) {
        cout << "Player 2 is the winner";
    }
    else if (c > a && c > b) {
        cout << "Player 3 is the winner";
    }
    else {
        cout << "It's a tie between players";
    }

    return 0;
}
