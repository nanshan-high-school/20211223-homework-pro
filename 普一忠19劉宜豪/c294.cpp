#include <iostream>
using namespace std;

int main() {
    int S[3];
    for (int i = 0; i < 3; i++) {
        cin >> S[i];
    }

    int space;
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j > 0; j--) {
            if (S[j] < S[j - 1]) {
                space = S[j];
                S[j] = S[j - 1];
                S[j - 1] = space;
            }
        }
    }
    
    int a = S[0], b = S[1], c = S[2];
    cout << a << " " << b << " " << c << endl;

    int A = a * a;
    int B = b * b;
    int C = c * c;

    if (a + b <= c) {
        cout << "No";
    } else if (A + B < C) {
        cout << "Obtuse";
    } else if (A + B == C) {
        cout << "Right";
    } else if (A + B > C) {
        cout << "Acute";
    }
} 
