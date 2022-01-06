#include <iostream>
using namespace std;

int main() {
    int amount, ouo;

    while (cin >> amount >> ouo) {
        string car[amount][2], order[ouo][2];

        for (int i = 0; i < amount; i++) {
            cin >> car[i][0] >> car[i][1];
        }
        for (int i = 0; i < ouo; i++) {
            cin >> order[i][0] >> order[i][1];
        }

        for (int i = 0; i < ouo; i++) {
            if (order[i][0] == "brand") {
                for (int j = 0; j < amount; j++) {
                    if (car[j][0] == order[i][1]) {
                        cout << car[j][0] << " " << car[j][1] << "\n";
                    }
                }
            } else {
                for (int j = 0; j < amount; j++) {
                    if (car[j][1] == order[i][1]) {
                        cout << car[j][0] << " " << car[j][1] << "\n";
                    }
                }
            }
        }
    }
} 
