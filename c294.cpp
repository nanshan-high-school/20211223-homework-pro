#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);

    if (a[0] + a[1] > a[2]) {
        if (a[0]*a[0] + a[1]*a[1] < a[2]*a[2]) {
            for (int i = 0; i < 3; i++) {
                cout << a[i] << " ";
            }
            cout << "\nObtuse";
        } else if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) {
            for (int i = 0; i < 3; i++) {
                cout << a[i] << " ";
            }
            cout << "\nRight";
        } else {
            for (int i = 0; i < 3; i++) {
                cout << a[i] << " ";
            }
            cout << "\nAcute";
        }
    } else {
        for (int i = 0; i < 3; i++) {
            cout << a[i] << " ";
        }
        cout << "\nNo";
    }
} 
