#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int a = 5, b = 10;

    cout << "Sum = " << sumN(a) << endl;
    cout << "Sum = " << sumN(b) << endl;

    return 0;
}