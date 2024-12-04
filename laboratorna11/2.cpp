#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string fullName;
    string groupNumber;
    string specialty;
    string institutionName;
    string institutionAddress;

public:
    Student(string name, string group, string spec, string instName, string instAddr) 
        : fullName(name), groupNumber(group), specialty(spec), 
          institutionName(instName), institutionAddress(instAddr) {}

    void displayStudentInfo() {
        cout << "Повне ім'я: " << fullName << endl;
        cout << "Номер групи: " << groupNumber << endl;
        cout << "Спеціальність: " << specialty << endl;
        cout << "Назва закладу: " << institutionName << endl;
        cout << "Адреса закладу: " << institutionAddress << endl;
    }
};

int main() {
    Student student("Іваненко Іван Іванович", "КН-202", "Комп'ютерні науки", "Національний університет", "Київ, Україна");
    student.displayStudentInfo();
    return 0;
}
