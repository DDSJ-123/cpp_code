#include<bits/stdc++.h>
using namespace std;
int n,c;
int w[2005];
int z[2005];
int dp[2005][100005];
int main(){
	cin>>c>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>z[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			if(w[i]<=j) dp[i][j]=max(dp[i-1][j],z[i]+dp[i][j-w[i]]);
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][c];
	return 0;
}



