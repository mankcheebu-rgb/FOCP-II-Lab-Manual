#include<iostream>
using namespace std;
int main()
{
int a=10;
float f=14.67;
std::string name="FOCP II";
cout << "Enter the value of a, f & name";
cin>>a;
cin>>f;
//cin.ignore();
//cin>>name;
std::getline(cin,name);
cout << "\n a= " << a << "\n f= " << f << "\n name= " << name;
return 0;
}