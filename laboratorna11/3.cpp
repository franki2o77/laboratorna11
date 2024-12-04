#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    string configuration;
    int year;

public:
    Car(string b, string m, string c, int y) : brand(b), model(m), configuration(c), year(y) {}

    void displayCarInfo() {
        cout << "Марка: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Конфігурація: " << configuration << endl;
        cout << "Рік випуску: " << year << endl;
    }
};

int main() {
    Car car("Tesla", "Model S", "Повний привід, електро", 2022);
    car.displayCarInfo();
    return 0;
}
