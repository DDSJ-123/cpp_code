#include<bits/stdc++.h>
using namespace std;
int f[20100];
int n,m,p,q;
int srx,sry; 
int lp,lz;
int find(int x){
	return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) f[fx]=fy;
}
int main(){
	cin>>n>>m>>p>>q;
	for(int i=1;i<=n+m;i++) f[i]=i;
	for(int i=1;i<=p;i++){
		cin>>srx>>sry;
		merge(srx,sry);
	} 
	for(int i=1;i<=q;i++){
		cin>>srx>>sry;
		srx=abs(srx)+n;
		sry=abs(sry)+n;
		merge(srx,sry);
	}
	for(int i=1;i<=n;i++){
		if(find(i)==find(1)) lp++;
	}
	for(int i=n+1;i<=m+n;i++){
		if(find(i)==find(n+1)) lz++;
	}
	cout<<min(lp,lz);
	return 0;
}



