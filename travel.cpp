#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
long long n,m,p,mi=INT_MAX;
long long a[N][N];
long long s[N];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=m;i++){
		long long u,v,cost;
		scanf("%lld%lld%lld",&u,&v,&cost);
		a[u][v]=cost;
		/*
		s[u]++;
		s[v]++;
		mi=min(mi,min(s[u],s[v]));
		*/
	}
	scanf("%lld",&p);
	//bfs(mi);
	cout<<m-n+1; 
	return 0;
}

