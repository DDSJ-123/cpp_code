#include<bits/stdc++.h>
using namespace std;
int n,c;
int w[2005];
int z[2005];
int dp[2000005];
int main(){
	cin>>c>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>z[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=w[i];j<=c;j++){
			dp[j]=max(dp[j],dp[j-w[i]]+z[i]);
		}
	}	
	cout<<dp[c];
	return 0;
}



