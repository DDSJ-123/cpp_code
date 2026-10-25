#include<bits/stdc++.h>
using namespace std;
int n,vw;
int v[10005],w[10005],s[10005];
int dp[10005];
int main(){
	cin>>n>>vw;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i]>>s[i];
	}
	for(int i=1;i<=n;i++){
		if(s[i]*v[i]>=vw){
			for(int j=v[i];j<=vw;j++){
				dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
			}
		}else{
			for(int j=vw;j>=v[i];j--){
				for(int p=0;p<=s[i];p++){
					if(j>=p*v[i]) dp[j]=max(dp[j],dp[j-p*v[i]]+p*w[i]);
				}
			}
		}
	}
	cout<<dp[vw];
	return 0;
}

