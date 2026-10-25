#include<bits/stdc++.h>
using namespace std;
const int N=50000000;
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
	cin>>n>>m;
	p=0;
	int z;
	for(int i=1;i<=n;i++) f[i]=i;
	int x,y;
	for(int i=1;i<=m;i++){
		cin>>x>>y>>z;
		merge(x,y);
	}
	for(int i=1;i<=n;i++){
		if(f[i]==i) p++;
	}	
	cout<<p<<endl;	
	return 0;
}

