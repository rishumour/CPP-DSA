#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    
    if(n < 5){
        cout << "invalid input";
    }

    do{
        cout << i << " " << endl;   // here it will print numbers from i to n
        i++; 
    }while(i <= n);    

    return 0; 
}