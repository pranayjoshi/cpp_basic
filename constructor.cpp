#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book( string nm){
            cout << "Creating object" << nm;
        }
};

int main(){
    Book book1(" Hello ");

    book1.title = "harrry Potter";
    book1.author = "jk rowling";
    book1.pages = 500;

    cout << book1.title;

    return 0;
}