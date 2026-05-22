// this is a very basic code for ternary statement

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << (n >= 0 ? "positive" : "negative") << endl;  // this is a very basic line of ternary statement

    return 0;
}