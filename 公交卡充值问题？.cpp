#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>0  && n<2000){
		if(n>0&&n<200){
			cout<<n;
		}
		if(n>=500){
			cout<<n+200;
		}
		if(n>=200&&n<300){
			cout<<n+50;
		}
		if(n>=300&&n<500){
			cout<<n+100;
		}
	}
	return 0;
}

