#include<bits/stdc++.h>
using namespace std;
struct pp{
	int jz,jq;
}a[10005],b[10005];
int f[10005];
int n,m,w;
int srx,sry;
int find(int x){
	return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) f[fx]=fy;
}
int main(){
	cin>>n>>m>>w;
	for(int i=1;i<=n;i++){
		cin>>a[i].jq>>a[i].jz;
	}
	for(int i=1;i<=n;i++) f[i]=i;
	for(int i=1;i<=m;i++){
		cin>>srx>>sry;
		merge(srx,sry);
	}
	for(int i=1;i<=n;i++){
		b[f[i]].jq+=a[i].jq;
		b[f[i]].jz+=a[i].jz;
	}
	for(int i=1;i<=n;i++){
		cout<<i<<":"<<b[i].jq<<" "<<b[i].jz<<"\n"; 
	}
	int dp[10005];
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			dp
		}
	}
	return 0;
}



