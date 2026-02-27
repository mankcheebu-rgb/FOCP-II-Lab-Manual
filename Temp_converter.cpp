#include <iostream>
using namespace std;
class Temperature
{
private:
    float celsius;
public:
    void inputTemperature()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
    float convertToFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }
    void displayResult()
    {
        cout << "Temperature in Fahrenheit: " 
             << convertToFahrenheit() << endl;
    }
};
int main()
{
    Temperature temp;
    temp.inputTemperature();
    temp.displayResult();
    return 0;
}