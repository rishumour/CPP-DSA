#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int size = 5;
    for (int i = 0; i < size; i++){
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }

    return 0;
}