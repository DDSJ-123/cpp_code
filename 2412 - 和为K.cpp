#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[25];
bool bj[25];
int ans;

void js(int z,int q){
	if(z==k){
		ans++;
		return ;
	}else{
		for(int i=q+1;i<=n;i++){
			if(!bj[i]){
				bj[i]=true;
				js(z+a[i],i);
				bj[i]=false;
			}	
		}
	}
}

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	js(0,0);
	cout<<ans;	
	return 0;
}



