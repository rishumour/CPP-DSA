#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){ // from 1 as counting would start from 1 itself
        char ch = 'A';
        for(int j = 1; j <= n; j++){
            cout << "A" << " ";
            ch = ch + 1;
         }
         cout << endl;
    }
    return 0; 
}