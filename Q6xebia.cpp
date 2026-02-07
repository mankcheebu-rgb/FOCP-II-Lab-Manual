#include <iostream>
using namespace std;
int main(){
    int n;
    float basic, bonus, net;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basic;

        bonus = basic * 0.12;      // 12% bonus
        net = basic + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << net << endl;
    }
    return 0;
}