#include <iostream>
using namespace std;

int main() {
	int oriHave;
    int drank;
    int newHave;
    int free;
    while (cin >> oriHave) {
        drank = oriHave;
        free = oriHave + 1;
        while (free >= 3) {
            newHave = free / 3;
            free = free - 3 * (free / 3);
            drank += newHave;
            free += newHave;
            newHave = 0;
        }
        
        cout << drank << endl;
    }
}
