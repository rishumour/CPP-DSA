// by Kadane's algorithm approach

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int kadanesAlgorithm(int arr[], int n){
    
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        
        int currSum = 0;   // because the currSum updates with each iteration
        
        for(int end = start; end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);

            if(currSum < 0){
                currSum = 0;           // just this step would make this more optimized
            }
        }
    }
    return maxSum;
}

int main(){
    int arr[5] ={1, 2, 3, 4, 5}; 
    int n = 5;
    cout << "max subarray sum = " << kadanesAlgorithm(arr, n) << endl;
    return 0;
}