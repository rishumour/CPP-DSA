#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    
    cout << (a > b ? "a is greater" : "b is greater") << endl; 

    return 0;
}