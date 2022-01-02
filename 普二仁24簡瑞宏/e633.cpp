#include <iostream>
using namespace std;

char c[60][60];

int main(){
    int a;
    cin >> a;
    for(int z = 1; z <= a; z++){
        cout << "Case #" << z << ":\n";
        string b;
        cin >> b;
        int l = b.length() + 2, h = 0, maxi = 0;
        for(int i = 0; i < b.length(); i++){
            switch(b[i]){
                case 'R':
                h++;
                if (h > maxi){
                    maxi = h;
                }
                break;
                case 'F':
                h--;
                break;
            }
        }
        int max = maxi + 1;
        for(int i = 0; i <= l; i++){
            for(int j = 0; j <= max; j++){
                c[i][j] = ' ';
            }
        }
        c[0][0] = '+';
        int l2 = 2, h2 = 1;
        char last;
        bool C = 0, change = 0;
        for(int i = 0; i < b.length(); i++){
            switch(b[i]){
                case 'R':
                if(b[i - 1] == 'F' && C) c[l2][h2 + 1] = '/';
                else c[l2][h2] = '/';
                l2++;
                h2++;
                last = 'R';
                C = 0;
                change = 1;
                break;
                case 'F':
                if(last == 'R' || (last == 'F' && !C) || (last == 'F' && C) || !change){
                    if(h2 - 1 == 0){
                        max++;
                        h2++;
                        for(int k = 1; k <= l; k++){
                            for(int j = max; j > 0; j--){
                                c[k][j + 1] = c[k][j];  
                            }
                        }
                        for(int k = 1; k <= l; k++) c[k][1] = ' ';
                    }
                    c[l2][h2 - 1] = '\\';
                }
                else c[l2][h2] = '\\';
                l2++;
                h2--;
                if(h2 == 0 && i != b.length() - 1){
                        max++;
                        h2++;
                        for(int k = 1; k <= l; k++){
                            for(int j = max; j > 0; j--){
                                c[k][j + 1] = c[k][j];  
                            }
                        }
                        for(int k = 1; k <= l; k++) c[k][1] = ' ';
                    }
                last = 'F';
                C = 0;
                break;
                case 'C':
                c[l2][h2] = '_';
                l2++;
                C = 1;
                break;
            }
        }
        for(int i = 1; i <= l; i++) c[i][0] = '-';
        for(int i = 1; i <= max; i++) c[0][i] = '|';
        bool ouo = 0;
        for(int i = 1; i <= l; i++){
            if(c[i][max] != ' ') {
                ouo = 1;
                break;
            }
        }
        if(!ouo) max--;
        for(int j = max; j >= 0; j--){
            for(int i = 0; i <= l; i++){
                cout << c[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
