#include <iostream>

using namespace std;

class Book {

    private:
        string author;

    public:
        string title;
        
        int pages;
        Book( string nm, string s_title, string s_author, int pg){
            cout << "Creating object" << nm;
            title = s_title;
            setRating(s_author) ;
            pages = pg;
        }

        void setRating(string s_author){
            author = s_author;
        }

        string getRating(){
            return author;
        }

        
};

int main(){
    Book book1(" Hello ", "harrry Potter", "jk rowling", 500);

    book1.setRating("hehe");

    cout << book1.title << book1.getRating();

    return 0;
}