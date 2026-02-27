#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    double price;
public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter price: ";
        cin >> price;
    }
    void displayDetails()
    {
        cout << "\nBook Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};
int main()
{
    Book book;
    book.inputDetails();
    book.displayDetails();
    return 0;
}