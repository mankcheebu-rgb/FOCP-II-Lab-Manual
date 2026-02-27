#include <iostream>
using namespace std;    
class Rectangle
{
private:
    float length;
    float width;
public:
    void inputDimensions()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }
    float calculateArea()
    {
        return length * width;
    }
    float calculatePerimeter()
    {
        return 2 * (length + width);
    }
    void displayResult()
    {
        cout << "\nArea of Rectangle: " << calculateArea() << endl;
        cout << "Perimeter of Rectangle: " << calculatePerimeter() << endl;
    }
};
int main()
{
    Rectangle rect;

    rect.inputDimensions();
    rect.displayResult();
    return 0;
}