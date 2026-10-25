#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	long long t;
	t=a%b;
	while(t!=0){
		a=b;
		b=t;
		t=a%b;
	}
	if(b==0) return 1;
	else return b;
}
int n;
long long sr,z,x;
int main(){
	cin>>n>>x;
	cin>>sr;
	sr=abs(sr-x);
	for(int i=2;i<=n;i++){
		cin>>z;
		z=abs(z-x);
		sr=gcd(sr,z);
	}
	cout<<sr;
	return 0;
}



