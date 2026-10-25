#include<bits/stdc++.h>
using namespace std;
int n,k;
int ans;

void js(int z,int c,int l){
	if(c<=0 || z>=n){
		if(c==0 && z==n){
			ans++;
			return ;			
		}
	}else{
		for(int i=l;i<=n-z;i++){
			js(z+i,c-1,i);
		}
	}
}

int main(){
	cin>>n>>k;
	if(n<k){
		cout<<0;
		return 0;
	}
	js(0,k,1);
	cout<<ans;	
	return 0;
}



