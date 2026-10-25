#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=60;
int a[N][N];
int d[N];
bool v[N];
int n,s;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	memset(d,0x3f,sizeof(d));
	d[s]=0;
	for(int i=1;i<=n;i++){
		int mi=-1;
		for(int j=1;j<=n;j++){
			if(!v[j] && (mi==-1 || d[j]<d[mi])){
				mi=j;
			}
		}
		v[mi]=true;
		for(int j=1;j<=n;j++){
			if(!v[j] && a[mi][j]!=0 && d[mi]+a[mi][j]<d[j]){
				d[j]=d[mi]+a[mi][j];
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(i!=s){
			if(d[i]==INF) cout<<-1;
			else cout<<d[i];
			cout<<" ";
		}
	}
	return 0;
}

