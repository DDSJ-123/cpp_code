#include<bits/stdc++.h>
using namespace std;
struct pp{
	int s,e,c;
}a[10005];
int n,m,t,ma;
int dp[10005];
bool cmp(pp lp,pp lp2){
	return lp.s<lp2.s;
} 
int main(){
	cin>>n>>m>>t;
	for(int i=1;i<=m;i++){
		cin>>a[i].s>>a[i].e>>a[i].c; 
	}
	sort(a+1,a+m+1,cmp);
	for(int i=1;i<=m;i++){
		dp[i]=a[i].c;
		int ma2=0;
		for(int j=1;j<i;j++){
			if(a[i].s-a[j].e>=t) ma2=max(ma2,dp[j]);
		}
		dp[i]+=ma2;
		ma=max(ma,dp[i]);
	}
	cout<<ma;
	return 0;
}



