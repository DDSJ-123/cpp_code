#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

int a[N][N];
int n,m,k,x;
int hx[N];
int zx[N];
int ma;

void js(int z,int ans){
	if(z==0){
		ma=max(ma,ans);
		return ;
	} 
	int l=0;
	for(int i=1;i<=n;i++){
		l=hx[i];
		hx[i]-=(x*n);
		for(int j=1;j<=m;j++){
			zx[j]-=x;
		}
		for(int j=1;j<=n;j++)
		js(z-1,ans+l);
		for(int j=1;j<=m;j++){
			zx[j]+=x;
		}
		hx[i]+=(x*n);
	}
	for(int i=1;i<=m;i++){
		l=zx[i];
		zx[i]-=(x*m);
		for(int j=1;j<=n;j++){
			hx[j]-=x;
		}
		for(int j=1;j<=m;j++)
		js(z-1,ans+l);
		for(int j=1;j<=n;j++){
			hx[j]+=x;
		}
		zx[i]+=(x*m);
	}
	return ;
}

int main(){
	
	freopen("boom.in","r",stdin);
	freopen("boom.out","w",stdout);
	
	cin>>n>>m>>k>>x;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			hx[i]+=a[i][j];
			zx[j]+=a[i][j];
		}
	}
	js(k,0);
	cout<<ma;
	return 0;
}



