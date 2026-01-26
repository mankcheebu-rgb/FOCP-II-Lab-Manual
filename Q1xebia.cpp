/*A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.*/
#include<iostream>
using namespace std;
float mark1,mark2,mark3;
int main()
{
    cout << "Enter three student's marks: ";
    cin >> mark1 >> mark2 >> mark3;
    
    float average = (mark1 + mark2 + mark3) / 3;
    
    cout << "Average marks: " << average << endl;
    
    return 0;
}