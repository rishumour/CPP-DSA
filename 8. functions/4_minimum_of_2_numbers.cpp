#include <iostream>
using namespace std;

int minNum(int a, int b){
    if(a < b){
        return a;
    }else {
        return b;
    }
}

int main() {
    int a = 5, b = 10;
    cout << "min = " << minNum(a, b) << endl;
    return 0;
}