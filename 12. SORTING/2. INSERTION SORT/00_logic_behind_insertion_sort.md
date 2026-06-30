# Insertion sort logic in C++

Insertion sort builds a sorted part of the array one element at a time. It takes one element as the **key**, compares it with the elements before it, and shifts bigger elements one position right until the key fits in the correct place. 

## Steps

1. Start from the second element, because the first element is already considered sorted.  
2. Store the current element as `key`.  
3. Compare `key` with elements on its left.  
4. Shift all larger elements one step right.  
5. Insert `key` into the correct position.  
6. Repeat until the whole array is sorted. 

## Example

For the array:

```text
5 2 4 6 1 3
```

### Pass 1
- `key = 2`
- Compare with `5`
- Shift `5` right
- Insert `2` at the beginning

Array becomes:

```text
2 5 4 6 1 3
```

### Pass 2
- `key = 4`
- Compare with `5`
- Shift `5` right
- Insert `4`

Array becomes:

```text
2 4 5 6 1 3
```

### Pass 3
- `key = 6`
- It is already in the correct place

Array stays:

```text
2 4 5 6 1 3
```

### Pass 4
- `key = 1`
- Compare with `6`, `5`, `4`, `2`
- Shift all of them right
- Insert `1` at the start

Array becomes:

```text
1 2 4 5 6 3
```

### Pass 5
- `key = 3`
- Compare with `6`, `5`, `4`
- Shift them right
- Insert `3`

Final array:

```text
1 2 3 4 5 6
```

## C++ code

```cpp
#inc

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr);

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

**Output:**
```text
1 2 3 4 5 6
```

## Method behind it

- The outer loop picks each element one by one. 
- The inner `while` loop moves larger eleme
- The variable `key` holds the current elemen
- The algorithm is good for small or near