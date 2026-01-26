/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.
*/
#include<iostream>
using namespace std;
int main(){
    int choice;
    float temp;
    
    cout << "Temperature Conversion Tool\n";
    cout << "1. Convert Celsius to Fahrenheit\n";
    cout << "2. Convert Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    if(choice == 1){
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        float fahrenheit = (temp * 9/5) + 32;
        cout << temp << "C = " << fahrenheit << "F" << endl;
    }
    else if(choice == 2){
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        float celsius = (temp - 32) * 5/9;
        cout << temp << "F = " << celsius << "C" << endl;
    }
    else{
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}