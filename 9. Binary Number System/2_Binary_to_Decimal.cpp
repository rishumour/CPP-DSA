#include <iostream>
using namespace std;

int decimalValue(int binNum){
    int ans = 0;
    int pow = 1;
    int rem;

    while(binNum > 0){
        rem = binNum % 2;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){
    int n = 10001;
    cout << "Decimal Value of" << n << "is = " << decimalValue(n) << endl;
    return 0;
}