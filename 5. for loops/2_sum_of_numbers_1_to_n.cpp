// to print sum of numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n;

    int sum = 0; // we initialized sum with 0 because we have to start couting from nothing and also to avoid any garbage value      for the first iteration it will calculate (sum += i) = (0 + i = newsum(sum))

    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){   // we could have taken 0 to initialize i but we didn't because it will just increase iteration by one
        sum += i;
    }
    cout << "sum = " << sum << endl;

    return 0; 
}