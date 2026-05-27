#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {1, 3, 5, 1, 1};
    int n = vec.size();
        
        sort(vec.begin(), vec.end());

        int freq = 1, ans = vec[0];

        for(int i = 1; i < n; i++){
            if(vec[i] == vec[i - 1]){
                freq++;
            }else{
                freq = 1;
                ans = vec[i];
            }
            if(freq > n/2){
                cout << ans << endl;
            }
        }   
        return 0;
}