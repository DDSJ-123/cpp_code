#include<bits/stdc++.h>
using namespace std;
int t,m;
int ct[2005],cz[2005];
int dp[100005];
int main(){
	cin>>t>>m;
	for(int i=1;i<=m;i++){
		cin>>ct[i]>>cz[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=ct[i];j<=t;j++){
			dp[j]=max(dp[j],dp[j-ct[i]]+cz[i]);
		}
	}
	cout<<dp[t];
	return 0;
}



