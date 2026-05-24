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
    int a = 6, b = 7;
    
    cout << sumN(a) << endl;
    cout << sumN(b) << endl;

    return 0;
}