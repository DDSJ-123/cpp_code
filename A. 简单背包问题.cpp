#include<bits/stdc++.h>
using namespace std;
int maxw,n;
int w[100],p[100];
int dp[20005];
int main(){
	cin>>maxw>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=maxw;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+p[i]);
		}
	}
	cout<<dp[maxw];
	return 0;
}



