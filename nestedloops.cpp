
#include <iostream>

using namespace std;

int main(){
    int nums[2][4] = {{1,2,3,4}, {2,3,4,5}};
    
    for (int i =0; i <2; i++){
        for (int j =0; j <4; j++){
            cout << nums[i][j];
        }
        
    }
    return 0;
}