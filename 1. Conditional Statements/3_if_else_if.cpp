// this is a very basic code for if_else_if conditional statements

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    
    if(marks >= 90){
        cout << "Grade A" << endl;
    }else if(marks >= 80){
        cout << "Grade B" << endl;
    }else if(marks >= 50){
        cout << "Grade C" << endl;
    }else if(marks >= 35){
        cout << "Just Passed" << endl;
    }else{
        cout << "Failed...."<< endl;
    }
    return 0;
}