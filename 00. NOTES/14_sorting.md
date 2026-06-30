# Sorting in C++

Sorting means arranging elements in a specific order, usually ascending or descending. In C++, the most common and recommended general-purpose sorting method is `std::sort()` from the `<algorithm>` header, and it is implemented using **Introsort**. 

## Main sorting types

- Bubble Sort: simple, but slow for large data.
- Selection Sort: repeatedly selects the smallest element.
- Insertion Sort: good for small or nearly sorted data.
- Merge Sort: stable and efficient.
- Quick Sort: fast on average.
- Heap Sort: guarantees \(O(n \log n)\) time.
- `std::sort()`: the most common practical choice in C++ STL. 

## Most common type

If you mean the most commonly used sorting in actual C++ coding, it is `std::sort()`. If you mean the most famous algorithm people learn first, it is often Bubble Sort, but it is not the best for real use. 

## Simple `std::sort()` example

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr);

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

**Output:**
```text
1 2 5 6 9
```