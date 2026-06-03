
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findGeometricTriplet(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    for (int j = 1; j < n - 1; j++) {
        
        int left = j - 1;
        int right = j + 1;

        long long target = (long long)nums[j] * nums[j];
        
        while (left >= 0 && right < n) {
            long long prod = (long long)nums[left] * nums[right];
            
            if (prod == target) {
                return {nums[left], nums[j], nums[right]};
            } else if (prod > target) {
                left--;
            } else {
                right++;
            }
        }
    }
    return {};
}
int main(){
    vector<int> nums = {2, 4, 6, 8, 32};
    vector<int> result = findGeometricTriplet(nums);
    if (!result.empty()) {
        for(int i = 0; i < result.size(); i++){
            cout << "Triplet: " << result[i] << " ";
        }
        cout << endl;
    } else {
        cout << "not found" << endl;
    }
    
    return 0;
}


