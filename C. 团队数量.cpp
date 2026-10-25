#include<bits/stdc++.h>
using namespace std;
int n,m;
char sr;
int x,y;
int a[2005];
int sum;
int find(int x){
	return a[x]==x?x:a[x]=find(a[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) a[fx]=fy;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n*2;i++){
		a[i]=i;
	}
	for(int i=1;i<=m;i++){
		cin>>sr>>x>>y;
		if(sr=='E'){
			merge(x+n,y);
			merge(y+n,x);
		}else{
			merge(x,y);
		}
	} 
	for(int i=1;i<=n;i++){
		if(a[i]==i) sum++;
	}
	cout<<sum;
	return 0;
}



