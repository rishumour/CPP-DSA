// by Kadane's algorithm approach

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;
    int arr[5] ={1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        int currSum = 0;
        for(int end = start; end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);

            if(currSum < 0){
                currSum = 0;           // just this term would make this more optimized
            }
        }

    }
    cout << "max subarray sum = " << maxSum << endl;
    return 0;
}