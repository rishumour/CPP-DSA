// this is a very basic code for conditional statements

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    
    if('a' <= ch <= 'z'){            // or just could have compared it with the ASCII value (ch >= 65 && ch <= 90)
        cout << "lowercase" << endl;
    }else{
        cout << "UPPERCASE" << endl;
    }

    return 0;
}