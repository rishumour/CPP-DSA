#include <iostream>
#include <climits>

using namespace std;

int main(){
    int arr[5];
    int size = 5;
    
    int largest = INT_MIN;
    
    for (int i = 0; i < size; i++){
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    for(int i = 0; i < size; i++){
        largest = max(arr[i], largest);
    }


    cout << "smallest element : " << largest << endl;

    return 0;
}