// this is a very basic code for conditional statements

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    if(n >= 0){
        cout << "N is positive" << endl;
    }else{
        cout << "N is Negative" << endl;
    }

    return 0;
}