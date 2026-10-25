#include<bits/stdc++.h>
using namespace std;
int a[105],dp[105];
int n,ma=0; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		dp[i]=max(dp[i-1]+dp[i],dp[i]);
		ma=max(ma,dp[i]);
	} 
	cout<<ma;
	return 0;
}



