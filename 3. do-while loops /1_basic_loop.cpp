// this is a very basic code for """do-while""" loops

#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    
    if(n < 5){
        cout << "invalid input";
    }

    do{
        cout << "Hello USER..." << endl;   // here we will have atleast one iteration
        i++; 
    }while(i <= n);   // condition will be checked after atleast one iteration  

    return 0; // return 0 signifies successful program completion
}