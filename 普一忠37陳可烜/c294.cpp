#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int len[3];
    for (int i = 0 ; i < 3; i++) {
        cin >> len[i];
    }
    sort(len, len + 3);
    for (int i = 0 ; i < 3; i++) {
        cout << len[i] << " ";
    }
    cout << "\n";
    if (len[0] + len[1] <= len[2]) {
        cout << "No" << endl;
    } else if (len[0] * len[0]  + len[1] * len[1] < len[2] * len[2]) {
        cout << "Obtuse" << endl; 
    } else if (len[0] * len[0]  + len[1] * len[1] == len[2] * len[2]) {
        cout << "Right" << endl; 
    } else if (len[0] * len[0]  + len[1] * len[1] > len[2] * len[2]) {
        cout << "Acute" << endl; 
    }
} 
