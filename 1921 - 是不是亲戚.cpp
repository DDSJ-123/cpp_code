#include<bits/stdc++.h>
using namespace std;
const int N=5090;
int f[N];
int n,m,p;
int find(int x){
	if(f[x]==x) return x;
	else return f[x]=find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy){
		f[fx]=fy;
	}
}
int main(){
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++) f[i]=i;
	int x,y;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		merge(x,y);
	}
	for(int i=1;i<=p;i++){
		cin>>x>>y;
		if(find(x)==find(y)) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

