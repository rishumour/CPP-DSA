// to print sum of numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n;

    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){ 
        sum += i;
        if(n >= 5){
            break; // breaks the iteration i.e stops the execution at the condition given
        }
    }
    cout << "sum = " << sum << endl;
    
    return 0; 
}