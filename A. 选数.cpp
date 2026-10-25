#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[25];
bool bj[25];
int q[25];
int sum;

void pd(){
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=q[i];
	} 
	for(int i=2;i<=sqrt(ans);i++){
		if(ans%i==0){
			return ;
		}
	}
	sum++;
	return ;
}

void dfs(int c,int idx){
	if(c==0){
		pd();
		return ;
	}else{
		for(int i=idx;i<=n;i++){
			if(!bj[i]){
				bj[i]=true;
				q[c]=a[i];
				dfs(c-1,i+1);
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
	if(k>n){
		cout<<0;
		return 0;
	}
	dfs(k,1);
	cout<<sum;
	return 0;
}



