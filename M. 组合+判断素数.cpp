#include<bits/stdc++.h>
using namespace std;
int n,k;
int ans;
int a[25];
bool bj[25];

void pd(int z){
	if(z<2){
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
 
void js(int c,int z,int w){
	if(c==k){
		pd(z);
		return ;
	}
	for(int i=w;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			js(c+1,z+a[i],i+1);
			bj[i]=false;
		}
	}
}
 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	js(0,0,1);
	cout<<ans; 
	return 0;
}



