#include<bits/stdc++.h>
using namespace std;
int a[105];
int sr;
int main(){
	a[1]=1;
	a[2]=2;
	a[3]=4;
	for(int i=4;i<=100;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	while(1){
		cin>>sr;
		if(sr==0) break;
		cout<<a[sr]<<"\n";
	}
	return 0;
}

