#include <iostream>
#include <queue>
using namespace std;

queue<int> a;

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        int word;
        cin >> word;
        switch (word) {
            case 1:
                int num;
                cin >> num;
                a.push(num);
                break;
            case 2:
                if (a.empty()) {
                    cout << "-1\n";
                    break;
                }
                cout << a.front() << "\n";
                break;
            case 3:
                if (a.empty()) {
                    break;
                }
                a.pop();
                break;
        };
    }
} 
