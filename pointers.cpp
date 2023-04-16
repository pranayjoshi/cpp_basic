#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *pA = &a;

    cout << *pA;
    *pA = 20;
    cout << a;
    return 0;
}