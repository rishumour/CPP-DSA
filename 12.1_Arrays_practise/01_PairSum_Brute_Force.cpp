#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans; // Result (indices) store karne ke liye empty vector banaya
    int n = nums.size(); // Array/Vector ki total length nikali

    // Outer Loop: Yeh pehle element ko fix karega (i = 0 se start hoga)
    for(int i = 0; i < n; i++){
        
        // Inner Loop: Yeh hamesha 'i' ke agle element se shuru hoga (j = i + 1)
        // Isse wahi same element khud se add nahi hoga aur duplicate pairs avoid honge
        for(int j = i + 1; j < n; j++){
            
            // Checking condition: Agar dono elements ka sum target ke barabar hai
            if(nums[i] + nums[j] == target){
                ans.push_back(i); // Pehle element ka index 'i' ans mein dala
                ans.push_back(j); // Dusre element ka index 'j' ans mein dala
                return ans;       // Pair milte hi yahi se answer return kar do (aage check karne ki zarurat nahi)
            }
        }
    }
    return ans; // Agar poore loops khatam hone par bhi koi pair nahi mila, toh khali vector return hoga
}

int main(){
    vector<int> nums = {2, 7, 11, 15}; // Given sorted array
    int target = 43; // Jo sum hume chahiye

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