#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,e;
	cin>>n;
	if(n>3){
		if(n<=6){
			e=15*5;
		} 
		if(n<=10&&n>7){
			e=15*15;
		} 
		if(n>10){
			e=15*25;
		} 
	}
	if(e%120!=0){
		cout<<e/120+1;
	}
	if(e%120==0){
		cout<<e/120;
	}
	return 0;
}
