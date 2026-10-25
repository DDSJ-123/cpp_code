#include<bits/stdc++.h>
using namespace std;
int n,A,B,C;
int dp[100005];
int x[100005];
void sc(){
	for (int i = 1; i <= n; i++){
    	int tmp = ((long long)A * i * i + B * i + C) % 20000;
    	x[i] = tmp - 10000;
    }
}
int main(){
	cin>>n>>A>>B>>C;
	sc();
	dp[0]=0;
	dp[1]=min(0,x[1]);
	for(int i=1;i<=n+1;i++){
		dp[i]=x[i];
		dp[i]+=min(dp[i-1],dp[i-2]);
	}
	cout<<dp[n+1];
	return 0;
}



