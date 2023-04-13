#include <iostream>

using namespace std;

int main(){
    string vari = "Pranay hello";
    cout << vari.length();
    cout << vari[3];
    vari[2] = 'i';
    cout << vari;
    cout << vari.find("nay"); 
    cout << vari.substr(3,3);
    return 0;
}