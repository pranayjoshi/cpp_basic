#include <iostream>

using namespace std;

int main(){
    int nums[] = {1,2,3,4};
    
    if (nums[2] == 3){
        cout << nums[2];
    } else if (nums[2] == 4){
        cout << nums[3];
    } else {
        cout << nums[1];
    }

    return 0;
}