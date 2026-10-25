#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000005];
bool bd(int s){
	int ss=s,sss=0;
	while(ss){
		sss*=10;
		sss=sss+ss%10;
		ss/=10;
	}
	if(sss==s) return true;
	else return false;
}
int main(){
	cin>>n>>m;
	for(int i=2;i<=m;i++){
		if(a[i]==0){	
			if(bd(i) && i>=n) cout<<i<<"\n";
			for(int j=1;j*i<=m;j++) a[i*j]=1;
		}
	}
	return 0;
}


