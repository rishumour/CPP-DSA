#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={1, 2, 3, 4, 5};
   
    cout << "Size of vec = " << vec.size() << endl;  // to print the size of vector

    vec.push_back(6);  // adding an element at the end of the vector

    cout << "Size of vec after pushing = " << vec.size() << endl; 

    vec.pop_back();  // deleting an element from the end of the vector

    cout << "Size of vec after poping = " << vec.size() << endl;
    
    cout << "the first element in the vector" << vec.front() << endl; // prints the front/first element from the vector

    cout << "the last element in the vector" << vec.back() << endl;  // prints the back/last element from the vector

    cout << "the element at index (x) in the vector" << vec.at(4) << endl; // prints the element at a certain index
    
    cout << "the capacity of the vector is " << vec.capacity() << endl; // prints the capacity of the vector

    return 0;
}