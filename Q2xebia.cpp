/*An architect wants to calculate the space covered by a circular 
fountain. Implement a solution to compute
the area of a circle*/
#include<iostream>
using namespace std;
int main(){
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    float area = 3.14159 * radius * radius;
    
    cout << "Area of the circle: " << area << endl;
    
    return 0;
}