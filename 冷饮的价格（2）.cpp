#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>=30){
		printf("%.1f",n*1.0);
	}
	if(n>=20 && n<30){
		printf("%.1f",n*1.2);
	}
	if(n>=10 && n<20){
		printf("%.1f",n*1.5);
	}
	if(n>=0 && n<10){
		printf("%.1f",n*1.8);
	}
	return 0;
}
