#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        string c[a][2];
        for(int i = 0; i < a; i++){
            cin >> c[i][0] >> c[i][1];
        }
        string d[b][2];
        for(int i = 0; i < b; i++){
            cin >> d[i][0] >> d[i][1];
        }
        for(int i = 0; i < b; i++){
            if(d[i][0] == "brand"){
                for(int j = 0; j < a; j++){
                    if(c[j][0] == d[i][1]){
                        cout << c[j][0] << " " << c[j][1] << "\n";
                    }
                }
            }
            if(d[i][0] == "color"){
                for(int j = 0; j < a; j++){
                    if(c[j][1] == d[i][1]){
                        cout << c[j][0] << " " << c[j][1] << "\n";
                    }
                }
            }
        }
        cout << "\n";
    }
}
