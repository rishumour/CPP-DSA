#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec; // intialized an empty vector (0 indexed vector)
    

    vector<int>vec_2={1, 2, 3, 4, 5}; // initialized a vector with some elements into it
    for(int i : vec_2){              // for each loop espcially for vectors s
        cout << i << endl;
    }

    vector<int>vec_3(5, 0);          // here 5 is the vector's size and 0 is the element at each index
    for(int i : vec_3){
        cout << i << endl;
    }

    return 0;
}