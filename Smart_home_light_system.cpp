#include <iostream>
#include <string>
using namespace std;
class SmartLight {
private:
    string brand;
    int brightness;   
    bool isOn;
public:
    SmartLight() {
        brand = "Unknown";
        brightness = 50;
        isOn = false;
    }
    SmartLight(string b, int bright, bool state) {
        brand = b;
        brightness = bright;
        isOn = state;
    }
    void turnOn() {
        isOn = true;
    }
    void turnOff() {
        isOn = false;
    }
    void increaseBrightness() {
        if (brightness < 100) {
            brightness += 10;
            if (brightness > 100)
                brightness = 100;
        }
    }
    void decreaseBrightness() {
        if (brightness > 0) {
            brightness -= 10;
            if (brightness < 0)
                brightness = 0;
        }
    }
    void displayStatus() {
        cout << "Brand: " << brand << endl;
        cout << "Status: " << (isOn ? "ON" : "OFF") << endl;
        cout << "Brightness: " << brightness << endl;
        cout << "------------------------" << endl;
    }
    ~SmartLight() {
        cout << "Object destroyed" << endl;
    }
};
int main() {
    SmartLight light1;
    SmartLight light2("Philips", 80, true);
    light1.displayStatus();
    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();
    light2.displayStatus();
    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();
    return 0;
}