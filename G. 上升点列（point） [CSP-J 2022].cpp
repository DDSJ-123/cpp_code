#include<bits/stdc++.h>
using namespace std;
const int N=510,K=110;
struct node{
	int x,y;
} a[N];
int dp[N][K],n,k;
bool cmp(node n1,node n2){
	return n1.x<n2.x || (n1.x==n2.x && n1.y<n2.y);
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=0;j<=k;j++){
			dp[i][j]=j+1;
		}
	}
	int c;
	for(int i=2;i<=n;i++){
		for(int t=1;t<i;t++){
			if(a[t].y>a[i].y){
				continue;
			}
			c=a[i].x-a[t].x+a[i].y-a[t].y-1;
			for(int j=c;j<=k;j++){
				dp[i][j]=max(dp[i][j],dp[t][j-c]+c-1);
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,dp[i][k]);
	}
	cout<<ans;
	return 0;
}

