#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> a;
    while(!a.empty()) a.pop();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        if(k == 1){
            int b;
            cin >> b;
            a.push(b);
        }
        else if(k == 2){
            if(!a.empty()){
                cout << a.front() << "\n";
            } else cout << -1 << "\n";
        }
        else{
            if(!a.empty()) a.pop();
        }
    }
}
