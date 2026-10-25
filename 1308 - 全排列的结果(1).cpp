#include<bits/stdc++.h>
using namespace std;

int n;
bool bj[15];
int a[15];

void sc(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
} 

void js(int z){
	if(z==n+1){
		sc();
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			a[z]=i;
			bj[i]=true;
			js(z+1);
			bj[i]=false;
		}
	}
	return ;
}

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	js(1);
	return 0;
}



