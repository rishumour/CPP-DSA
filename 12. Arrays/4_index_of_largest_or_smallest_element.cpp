#include <iostream>
#include <climits>

using namespace std;

int main(){
    int nums[5] = {12, 14, 16, 11, 122};
    int size = 5;
    int indexOfLargest = 0;

    for(int i = 1; i < size; i++){
        if(nums[i] > nums[indexOfLargest]){
            indexOfLargest = i;
        }
    }
    cout << "Index : " << indexOfLargest << endl;
    
    return 0;
}