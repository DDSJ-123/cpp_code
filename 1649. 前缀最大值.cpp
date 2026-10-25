#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[100005];
int dp[100005];
long long ans=0;
int main(){
	cin>>n>>x;
	a[1]=x;
	dp[1]=x;
	ans+=dp[1];
	for(int i=2;i<=n;i++){
		a[i]=(379*a[i-1]+131)%997;
		dp[i]=max(dp[i-1],a[i]);
		ans+=dp[i];
	}
	cout<<ans;
	return 0;
}



