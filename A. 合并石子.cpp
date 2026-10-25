#include<bits/stdc++.h>
using namespace std;
const int N=1110;
int dp[N][N];
int s[N],n;
int main(){
	cin>>n;
	memset(dp,0x3f,sizeof(dp)); 
	for(int i=1;i<=n;i++){
		cin>>s[i];
		s[i]+=s[i-1];
		dp[i][i]=0;
	}
	for(int len=2;len<=n;len++){
		for(int l=1;l+len-1<=n;l++){
			int r=l+len-1;
			for(int k=1;k<r;k++){
				dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+s[r]-s[l-1]);
			}
		}
	}
	cout<<dp[1][n];
	return 0;
}

