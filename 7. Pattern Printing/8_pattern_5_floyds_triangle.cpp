// it is the same as number trianglr pattern

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){ // from 1 as counting would start from 1 itself
         for(int j = 0; j < i+1 ; j++){  // i+1 because with each step down the number of stars increase by +1 put j = 0 if printing is needed from 0
            cout << j << " ";
         }
         cout << endl;
    }
    return 0; 
}