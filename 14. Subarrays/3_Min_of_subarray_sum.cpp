// by brute force approach

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;
    int arr[5] ={1, 2, 3, 4, 5};

    int minSum = INT_MAX;

    for(int start = 0; start < n; start++){
        int currSum = 0;
        for(int end = start; end < n; end++){
            currSum += arr[end];
            minSum = min(currSum, minSum);
        }

    }
    cout << "max subarray sum = " << minSum << endl;
    return 0;
}