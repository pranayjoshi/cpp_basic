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

class HPBook : public Book{
    public:
        int rank;
        HPBook(string srank){
            rank = srank;
        }

        void tellRank(){
            return rank
        }
}

int main(){
    HPBook book1(" Hello ", "harrry Potter", "jk rowling", 500, 2);
    
    
    cout << book1.title;

    return 0;
}