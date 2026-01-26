#include<iostream>
int main()
{
    int a;
    float f;
    char c;
    // Taking integer input
    std::cout << "Enter an integer: ";
    std::cin >> a;
    // Taking float input
    std::cout << "Enter a float: ";
    std::cin >> f;
    // Taking character input
    std::cout << "Enter a character: ";
    std::cin >> c;
    // Displaying the values
    std::cout << "The value of a=" << a << std::endl;
    std::cout << "The value of f=" << f << std::endl;
    std::cout << "The value of c=" << c << std::endl;
    return 0;
}