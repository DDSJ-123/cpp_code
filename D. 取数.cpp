#include<bits/stdc++.h>
using namespace std;
int n;
int a[51];
int dp[51];
int ma;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	dp[1]=a[1];
	for(int i=1;i<=n;i++){
		dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		ma=max(dp[i],ma);
	}
	cout<<ma;
	return 0;
}



