# Bubble sort logic in C++

Bubble sort works by repeatedly comparing **adjacent** elements and swapping them if they are in the wrong order. After each pass, the largest unsorted element moves to the end, like a bubble rising to the surface. 

## Steps

1. Compare the first two elements.  
2. If the left element is bigger, swap them.  
3. Move one step right and compare the next pair.  
4. Repeat until the end of the array.  
5. Start the next pass and ignore the last sorted element.  
6. Keep repeating until no swaps are needed. 

## Example

For the array:

```cpp
5 1 4 2 8
```

### Pass 1
- Compare 5 and 1 → swap → `1 5 4 2 8`
- Compare 5 and 4 → swap → `1 4 5 2 8`
- Compare 5 and 2 → swap → `1 4 2 5 8`
- Compare 5 and 8 → no swap

After pass 1, `8` is in the correct place. 

### Pass 2
- Compare 1 and 4 → no swap
- Compare 4 and 2 → swap → `1 2 4 5 8`
- Compare 4 and 5 → no swap

### Pass 3
- Compare 1 and 2 → no swap
- Compare 2 and 4 → no swap

Now the array is sorted. 

## C++ code

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## Method behind it

- The outer loop controls the number of passes. 
- The inner loop compares adjacent elements. 
- `swap()` exchanges two elements when they are out of order. 
- The `swapped` flag is an optimization that stops early if the array is already sorted. 