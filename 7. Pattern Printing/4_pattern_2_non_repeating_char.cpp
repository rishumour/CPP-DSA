#include <iostream>
using namespace std;

int main(){
    int n;
    char ch = 'A';
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){ // from 1 as counting would start from 1 itself
         for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
         }
         cout << endl;
    }
    return 0; 
}