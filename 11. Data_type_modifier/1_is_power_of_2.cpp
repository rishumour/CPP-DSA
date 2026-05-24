#include <iostream>
using namespace std;

bool isPowerOfTwo (int n){
    if(n > 0 && (n & (n-1)) == 0){   
    // the condition checks if the number is greater than 0 """ AND """ bitwise operation(&) between n and (n-1) == 0
        return true;
    }else{
        return false;
    }
}

int main(){
    int num = 8;

    if(isPowerOfTwo(num)){
        cout << num << " is a Power of 2.." << endl;
    }else{
        cout << num << " is not a power of 2.." << endl;
    }

    return 0;
}