#include <iostream>
#include <vector>
using namespace std;

int mooreVotingAlgorithm(vector<int>& nums, int n){
    int freq = 0, ans = 0;
    
    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans = nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;

    // if the majority element does not exist then 
    int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count > n/2) return ans;
    else return -1;
}

int main(){
    vector<int> nums = {1, 3, 5, 1, 1};
    int n = nums.size();
    cout << "Majority Element = " << mooreVotingAlgorithm(nums, n) << endl;
    return 0;
}