#include<bits/stdc++.h>
using namespace std;
long long n,x; 
int main(){
	freopen("car.in","r",stdin);
	freopen("car.out","w",stdout);
	scanf("%lld",&n,&x);
	x*=100;
	n*=10;
	if(n<x){
		cout<<"No!";
	}else{
		if((x-n)/10%2==0) cout<<"Yes!";
		else cout<<"No!";
	}
	return 0;
}


