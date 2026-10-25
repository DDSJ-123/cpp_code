#include<bits/stdc++.h>
using namespace std;
long long n,x; 
int main(){
	/*
	freopen("car.in","r",stdin);
	freopen("car.out","w",stdout);
	*/
	scanf("%lld%lld",&n,&x);
	x*=100;
	n*=10;
	if(n<abs(x)){
		cout<<"No!";
	}else{
		if((abs(x)-n)/10%2==0) cout<<"Yes!";
		else cout<<"No!";
	}
	return 0;
}


