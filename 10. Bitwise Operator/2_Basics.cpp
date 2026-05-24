#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter a, b : ";
    cin >> a >> b;
    
    cout << "a << b = " << (a << b) << endl; // bitwise LeftShift operator

    cout << "a >> b = " << (a >> b) << endl; // bitwise RightShift operator

    return 0;
}