// triplets eg 1, 2, 4 multiply by n at each element



#include <iostream>
using namespace std;


void findGeometricTriplets(int arr[], int n){
    
    for (int j = 1; j < n - 1; j++){        // One by fix every element as middle element
        
        // Initialize i and k for the current j                                    
        int i = j - 1;
        int k = j + 1;

        // Find all i and k such that (i, j, k)
        // forms a triplet of GP
        while (i >= 0 && k <= n - 1){

            // if arr[j]/arr[i] = r and arr[k]/arr[j] = r and r is an integer (i, j, k) forms Geometric Progression 
            while (arr[j] % arr[i] == 0 && arr[k] % arr[j] == 0 && arr[j] / arr[i] == arr[k] / arr[j]){
                // print the triplet
                cout << arr[i] << " " << arr[j]
                     << " " << arr[k] << endl;

                // Since the array is sorted and elements are distinct
                k++, i--;
            }

            // if arr[j] is multiple of arr[i] and arr[k] is
            if (arr[j] % arr[i] == 0 && arr[k] % arr[j] == 0){ // multiple of arr[j], then arr[j] / arr[i] !=
                if (arr[j] / arr[i] < arr[k] / arr[j]){   // arr[k] / arr[j]. We compare their values to
                    i--; // move to next k or previous i.
                }else{
                    k++;
                }
            }

            // else if arr[j] is multiple of arr[i], then , try next k. Else, try previous i.
            else if (arr[j] % arr[i] == 0){
                k++;
            }
            else{
                i--;
            }
        }
    }
}
int main(){
    int arr[] = {1, 2, 4, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    findGeometricTriplets(arr, n);

    return 0;
}