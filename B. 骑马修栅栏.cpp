#include<bits/stdc++.h>
using namespace std;
int a[505][505];
int d[550],r[550];
int n,mi,k,x,y;
void dfs(int z){
	for(int i=1;i<=500;i++){
		if(a[z][i]>0){
			a[z][i]--;
			a[i][z]--;
			dfs(i);
		}
	}
	k++;
	r[k]=z;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		a[x][y]++;
		a[y][x]++;
		d[x]++;
		d[y]++;
	}
	int f1=-1,f2=-1;
	for(int i=1;i<=500;i++){
		if(d[i]%2==1){
			if(f1==-1) f1=i;
			else if(f2==-1) f2=i;
		}
	}
	mi=1;
	if(f1!=-1 && f2!=-1){
		mi=min(f1,f2);
	}
	dfs(mi);
	for(int i=k;i>0;i--){
		cout<<r[i]<<"\n";
	}
	return 0;
}
