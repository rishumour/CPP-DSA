// print all the subarrays

// if we have the start and the end of the subarray we can print all the subarrays

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    int arr[5] ={1, 2, 3, 4, 5};

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout << arr[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}