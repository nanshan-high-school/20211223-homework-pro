#include <iostream>
using namespace std;

int main() {
    int n = 0, c;
    while(cin >> n){
        c = n;
        
        while(true){
            c += n / 3;
            if (n < 3){
                break;
            }
            n = n / 3 + n % 3;
        }
        if (n == 2){
            c++;
        }
        cout << c <<"\n";
    }

} 
