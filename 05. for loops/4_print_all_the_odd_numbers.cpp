// to print sum of numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 0; i <= n; i++){ 
        if(i % 2 != 0){         // checks for all the odd numbers in the range
            cout << i << " " << endl;
        }        
    }
    
    return 0; 
}