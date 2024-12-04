#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string title;
    string author;
    int year;

public:
    Library(string t, string a, int y) : title(t), author(a), year(y) {}

    void displayBookInfo() {
        cout << "Назва книги: " << title << endl;
        cout << "Автор: " << author << endl;
        cout << "Рік видання: " << year << endl;
    }
};

int main() {
    Library book("Преступление и наказание", "Федор Достоевский", 1866);
    book.displayBookInfo();
    return 0;
}
