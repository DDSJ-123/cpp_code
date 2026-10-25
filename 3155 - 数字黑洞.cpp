#include<bits/stdc++.h>
using namespace std;

int n;
int ls,bs;
int a[3];
int c;

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	while(n!=495){
		int ls=0,bs=n;
		c++;
		for(int i=0;i<3;i++){
			a[i]=bs%10;
			bs/=10;
		}
		sort(a,a+3);
		ls=a[0]*100+a[1]*10+a[2]; 
		bs=a[2]*100+a[1]*10+a[0];
		n=bs-ls; 
	}
	cout<<c;
	return 0;
}



