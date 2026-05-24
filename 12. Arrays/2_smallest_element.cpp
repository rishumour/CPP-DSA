#include <iostream>
#include <climits>

using namespace std;

int main(){
    int arr[5];
    int size = 5;
    
    int smallest = INT_MAX;
    
    for (int i = 0; i < size; i++){
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    for(int i = 0; i < size; i++){
        smallest = min(arr[i], smallest);
    }


    cout << "smallest element : " << smallest << endl;

    return 0;
}