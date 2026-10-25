#include<bits/stdc++.h>
using namespace std;
int n,m;
int f[1005];
int x,y,z;
int find(int x){
	return f[x]==x?x:find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) f[fx]=fy;
}
int main(){
	cin>>n;
	while(n!=0){
		z=0;
		cin>>m;
		for(int i=1;i<=n;i++) f[i]=i;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			merge(x,y);
		}
		for(int i=1;i<=n;i++){
			if(f[i]==i) z++;
		}
		cout<<z-1<<"\n";
		cin>>n;
	}
	return 0;
}
 


