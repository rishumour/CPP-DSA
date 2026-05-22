// to print numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){   // we could have taken 0 to initialize i but we didn't because it will just increase iteration by one
        cout << i << " " << endl;
    }

    return 0; 
}