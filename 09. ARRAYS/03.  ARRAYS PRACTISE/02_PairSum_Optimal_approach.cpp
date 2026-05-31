// 2 - pointer approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans; // Result (indices) store karne ke liye empty vector banaya
    int n = nums.size(); // Array/Vector ki total length nikali

    int i = 0, j = n - 1; // Do pointers banaye: 'i' start par (0) aur 'j' last element par (n-1)
    
    while(i < j){ // Jab tak left pointer (i), right pointer (j) se chhota hai, tab tak loop chalega
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans; // Agar poore loops khatam hone par bhi koi pair nahi mila, toh khali vector return hoga
}

int main(){
    vector<int> nums = {2, 7, 11, 15}; // Given sorted array
    int target = 13; // Jo sum hume chahiye

    vector<int> ans = pairSum(nums, target);
    
    // Safety Check: Pehle check karo ki ans vector khali toh nahi hai
    // Agar direct ans[0] print karenge aur vector khali hua, toh Segmentation Fault aa jayega
    if(!ans.empty()) { // if ans is not empty
        cout << ans[0] << ", " << ans[1] << endl; // Indices print honge (Output: 0, 1)  ans[0] -> ans[i] and ans[1] -> ans[j]
    } else {
        cout << "No pair found with the target sum." << endl;
    }
    return 0;
}