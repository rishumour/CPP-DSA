// sum functions

#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main() {
    int a = 5, b = 5;
    cout << "sum = " << sum(a, b) << endl;
    return 0;
}