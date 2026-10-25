#include<bits/stdc++.h>
using namespace std;

const int N = 25;
int a[N],ans;
int n;
bool bj;
int b[3];

void js(int z){
	if(z==n+1){
		if(b[0]==b[1] && b[1]==b[2]){
			bj=true;
		}
		return ;
	}
	for(int i=0;i<3;i++){
		if(b[i]+a[z]<=ans){
			b[i]+=a[z];
			js(z+1);
			b[i]-=a[z];
		}
	}
}

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans+=a[i];
	}
	if(ans%3!=0){
		cout<<"no";
		return 0; 
	}
	ans/=3;
	js(1);
	if(bj){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}



