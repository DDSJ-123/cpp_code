#include<bits/stdc++.h>
using namespace std;
int n,m,p,q;
int x,y,ans;
int f[50005]; 
int find(int x){
	return f[x]==x?x:find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) f[fx]=fy;
}
int main(){
	cin>>n>>m>>p>>q;
	for(int i=1;i<=max(m,n)+10000;i++) f[i]=i;
	for(int i=1;i<=p+q;i++){
		cin>>x>>y;
		x+=10000;
		y+=10000;
		merge(x,y);
	}
	for(int i=1;i<=max(m,n)+10000;i++){
		if(f[i]==1+10000 || f[i]==-1+10000) ans++;
	} 
	cout<<ans;
	return 0;
}



