#include <iostream>
using namespace std;

int factorialN(int n){
    long fact = 1;  // long long beacuse factorial can be a very big number 
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int a = 5, b = 6;

    cout << "Factorial of" << a << "is = " << factorialN(a) << endl;
    cout << "Factorial of" << b << "is = " << factorialN(b) << endl;

    return 0;
}