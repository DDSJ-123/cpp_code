#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>10){
		printf("%.1f",n*2*0.9);
	}
	else{
		printf("%.1f",n*2.0);
	}
	return 0;
}
