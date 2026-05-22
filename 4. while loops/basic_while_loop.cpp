// we use while loops when we dont have the number of iterations required for the program to work...

#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    
    while(i <= n){
        cout << i << " " << endl;
        i++;
    }

    return 0; 
}