#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005],b[1005];
int dp[1005][1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==b[j]){
				dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[n][n];
	return 0;
}



