#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N][N];
int n,e;
int q[N];
int l,r;
bool f[N];
int main(){
	cin>>n>>e;
	int x,y;
	for(int i=1;i<=e;i++){
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;	
	}
	l=r=1;
	q[1]=1;
	f[1]=true;
	cout<<1<<" ";
	while(l<=r){
		for(int i=1;i<=n;i++){
			if(a[q[l]][i]==1 && !f[i]){
				cout<<i<<" ";
				r++;
				q[r]=i;
				f[i]=true;
			}
		}
		l++;
	}
	return 0;
}
