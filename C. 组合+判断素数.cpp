#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[25];
bool bj[25];
int ans;
void pd(int z){
	if(z<2){
		return;
	}
	if(z==2){
		ans++;
		return ;
	}
	for(int i=2;i<=sqrt(z);i++){
		if(z%i==0){
			return ;
		}
	}
	ans++;
	return ;
} 

void js(int z,int c,int s){
	if(c==0){
		pd(z);
		return ;
	}
	for(int i=s;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			js(z+a[i],c-1,s+1);
			bj[i]=false;
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	js(0,k,1);
	cout<<ans;
	return 0;
}



