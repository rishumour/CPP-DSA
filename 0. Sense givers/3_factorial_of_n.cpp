#include <iostream>
using namespace std;

int main(){
    int n;
    
    // using lonf for fact as it can be a very big number

    long fact = 1; // inititalizing it with one because any multiplied by 0 is 0
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){ //again for 1 it is the same logic
        fact *= i;      
    }
    cout << "Factorial = " << fact << endl;

    return 0; 
}