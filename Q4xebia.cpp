#include <iostream>
using namespace std;
int main(){
    int i,q,p,t;
    cout << "Enter item no-";
    cin >> i;
    cout << "Enter quantity-";
    cin >> q;
    cout << "Enter price-";
    cin >> p;
    t=p*q;
    t=t-t*20/100;
    cout<<"The total bill with discount is-"<<t<<endl;
    return 0;
}