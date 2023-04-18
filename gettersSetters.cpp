#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book( string nm, string s_title, string s_author, int pg){
            cout << "Creating object" << nm;
            title = s_title;
            author = s_author;
            pages = pg;
        }

        
};

int main(){
    Book book1(" Hello ", "harrry Potter", "jk rowling", 500);

    cout << book1.title << book1.isLengthy();

    return 0;
}