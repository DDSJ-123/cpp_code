#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>0&&n<8){
		if(n==1){
			cout<<"swim";
		}
		if(n==3){
			cout<<"program";	
		}
		if(n==5){
			cout<<"read";
		}
		if(n==6){
			cout<<"math";
		}
		if(n==2||n==4||n==7){
			cout<<"rest";
		}
	}
	return 0;
}
