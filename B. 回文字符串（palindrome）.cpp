#include<bits/stdc++.h>
using namespace std;
const int N=5010;
char s1[N],s2[N];
int n;
int dp[N][N];
int main(){
	cin>>n;
	cin>>s1+1;
	for(int i=1;i<=n;i++){
		s2[n-i+1]=s1[i];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(s1[i]==s2[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		} 
	}
	cout<<n-dp[n][n];
	return 0;
}

