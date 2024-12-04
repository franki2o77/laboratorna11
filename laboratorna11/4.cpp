#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    string food;

public:
    Animal(string n, string f) : name(n), food(f) {}

    void displayAnimalInfo() {
        cout << "Назва тварини: " << name << endl;
        cout << "Що їсть: " << food << endl;
    }
};

int main() {
    Animal animal("Кіт", "Риба, м'ясо");
    animal.displayAnimalInfo();
    return 0;
}
