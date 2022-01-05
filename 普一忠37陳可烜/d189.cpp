#include <iostream>
using namespace std;
int main() {
    int bottles = 0;
    int exchange = 0;
    int HAVE;
    while (cin >> HAVE) {
        bottles += HAVE;
        HAVE++;
        while (HAVE >= 3) {
            bottles += HAVE / 3;
            exchange = HAVE / 3;
            HAVE = HAVE - 3 * (HAVE / 3);
            HAVE += exchange;
        }
        cout << bottles << endl;
        bottles = 0;
    }
} 
