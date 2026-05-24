#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter a, b : ";
    cin >> a >> b;
    
    cout << "a & b = " << (a & b) << endl; // bitwise AND

    cout << "a | b = " << (a | b) << endl; // bitwise OR
    
    cout << "a ^ b = " << (a ^ b) << endl; // bitwise XOR

    return 0;
}