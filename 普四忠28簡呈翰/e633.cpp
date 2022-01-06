#include <iostream>
using namespace std;

int main(){
	int d;
	cin >> d;
	for(int owwo=1; owwo<=d; owwo++){
		string source;
		cin >> source;
		int length=source.length(), high=-1, low=0, now=0;
		for(int t=0; t<length; t++){
			if(source[t]=='R'){
				now++;
				if(now-1>high)
					high=now-1;
			}else if(source[t]=='F'){
				now--;
				if(now<low)
					low=now;
			}else if(source[t]=='C'){
				if(now>high){
					high=now;
				}
			}
		}
		int height=high-low+1;
		char result[52][52]={0};
		now=0-low;
		for(int m=0; m<length; m++){
			if(source[m]=='R'){
				result[m][now]='/';
				now++;
			}else if(source[m]=='F'){
				result[m][now-1]='\\';
				now--;
			}else if(source[m]=='C'){
				result[m][now]='_';
			}
		}
		printf("Case #%d:\n", owwo);
		for(int t1=height-1; t1>=0; t1--){
			cout << "| ";
			for(int t2=0; t2<length; t2++){
				if(result[t2][t1]==0)
					cout << " ";
				else
					cout << result[t2][t1];
			}
			cout << "\n";
		}
		cout << "+";
		for(int t=0; t<length+2; t++)
			cout << "-";
		cout << "\n\n";
	}
} 
