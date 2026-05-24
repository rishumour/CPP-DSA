#include <iostream>
using namespace std;

int main(){
    int n;

    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 0; i <= n; i++){ 
        if(i % 3 == 0){         // checks for all the odd numbers in the range
            sum += i;
        }        
    }
    cout << "sum = " << sum << endl;

    
    
    return 0; 
}