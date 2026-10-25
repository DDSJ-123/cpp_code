#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N][N];
long long dp[N][N];
int n,m; 
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	memset(dp,-0x7f,sizeof(dp));
	long long ma;
	dp[1][0]=0;
	for(int j=1;j<=m;j++){
		ma=-1e18;
		for(int i=1;i<=n;i++){
			ma=max(ma,dp[i][j-1])+a[i][j];
			dp[i][j]=max(dp[i][j],ma);
		}
		ma=-1e18;
		for(int i=n;i>=1;i--){
			ma=max(ma,dp[i][j-1])+a[i][j];
			dp[i][j]=max(dp[i][j],ma);
		}
	}
	cout<<dp[n][m];
	return 0;
}

