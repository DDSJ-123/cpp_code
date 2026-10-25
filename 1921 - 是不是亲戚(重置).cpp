#include<bits/stdc++.h>
using namespace std;
int a[5005];
int n,m,q;
int x,y;
int find(int x){
	return a[x]==x?x:find(a[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) a[fx]=fy;
}
int main(){
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		merge(x,y);
	}
	while(q--){
		cin>>x>>y;
		if(find(x)==find(y)){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
	return 0;
}
 


