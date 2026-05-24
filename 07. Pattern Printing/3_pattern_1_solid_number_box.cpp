#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){ // from 1 as counting would start from 1 itself
         for(int j = 1; j <= n; j++){
            cout << j << " ";
         }
         cout << endl;
    }
    return 0; 
}