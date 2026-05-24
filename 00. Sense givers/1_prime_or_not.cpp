#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout << "Enter N: ";
    cin >> n;

    for(int i = 2; i < n-1; i++){ //int i = 2 because 1 is already a prime number so there is no point checking it
        if(n % 2 == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "Prime Number" << endl;
    }else{
        cout << "Non Prime Number" << endl;
    }
    return 0;
}
