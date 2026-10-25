#include<bits/stdc++.h>
using namespace std;

int n,a;
int sn;

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	sn=n;
	while(sn){
		a+=(sn%10);
		sn/=10;
	}
	if(n%a==0){
		cout<<"Yes"; 
	}else{
		cout<<"No";
	}
	return 0;
}



