// this is a simple example of nested loop printing a box of # 

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    
    for(int i = 1; i <= n; i++){  // for no. of rows 
        for(int j = 1; j <= m; j++){ // for no. of actions like here printing #
            cout << "#" << " ";
        }
        cout << endl;
    }
    return 0; 
}