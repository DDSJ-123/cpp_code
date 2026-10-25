#include<bits/stdc++.h>
using namespace std;
struct pp{
	int v,w,s;
}a[10005];
int n,m;
int dp[10005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].v>>a[i].w>>a[i].s;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i].s;j++){
			for(int k=m;k>=a[i].v;k--){
				dp[k]=max(dp[k],dp[k-a[i].v]+a[i].w);
			}
		}
	}
	cout<<dp[m];
	return 0;
}



