#include <iostream>
#include <climits>

using namespace std;

void modifyArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = 3 * arr[i];
    }
}

int main(){
    int arr[3] = {4, 3, 2};
    
    cout << "In main function: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    
    modifyArray(arr, 3);
    cout << "After Modification: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}