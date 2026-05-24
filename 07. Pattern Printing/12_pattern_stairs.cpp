#include <iostream>
using namespace std;

int main() {
    int steps, step_height;
    cout << "Enter number of steps: ";
    cin >> steps;
    cout << "Enter height of step: ";
    cin >> step_height;

    for (int i = 1; i <= steps; i++) {
        for (int h = 0; h < step_height; h++) {
            for (int j = 1; j <= i * step_height; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}