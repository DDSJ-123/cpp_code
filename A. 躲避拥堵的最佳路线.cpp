#include<bits/stdc++.h>
using namespace std;
const int N=20010;
int n,m,s,t;
int u[N],v[N],w[N],a[N];
int l=INT_MAX,r=0;
void inti(){
	for(int i=1;i<=n;i++) a[i]=i;
} 
int find(int x){
	return a[x]==x?x:find(a[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) a[fx]=fy;
}
bool check(int mid){
	inti();
	for(int i=1;i<=m;i++){
		if(w[i]<=mid){
			merge(u[i],v[i]);
		}
	}
	if(find(s)==find(t)){
		return true;
	}
	return false;
}
int main(){
	cin>>n>>m>>s>>t;
	for(int i=1;i<=m;i++){
		cin>>u[i]>>v[i]>>w[i];
		l=min(l,w[i]);
		r=max(r,w[i]);
	}
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	cout<<l;
	return 0;
}



