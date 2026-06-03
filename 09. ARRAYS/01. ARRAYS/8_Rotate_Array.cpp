#include <iostream>
#include <vector>
#include <algorithm> 


using namespace std;

void reverse(vector<int>& nums, int start, int end){
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums [end] = temp;

        start ++;
        end --;
    }
}
void rotate(vector<int>& nums, int d){
    int n = nums.size();
    if(n == 0) return;

    d = d % n;
    
    reverse(nums, 0, n - 1);
    reverse(nums, 0, d - 1);
    reverse(nums, d, n - 1);
}

int main(){
    vector<int> nums ={1, 2, 4, 5, 6}; 
    int d = 3; // the number of rotations
    
    rotate(nums, d);
        
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}