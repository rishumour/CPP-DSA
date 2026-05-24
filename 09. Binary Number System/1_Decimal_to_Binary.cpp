#include <iostream>
using namespace std;

int binaryValue(int decimal){
    int ans = 0;
    int pow = 1;
    int rem;

    while (decimal > 0){
        rem = decimal % 2;
        decimal = decimal / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main(){
    cout << "Binary Value = " << binaryValue(42) << endl;
    return 0;
}