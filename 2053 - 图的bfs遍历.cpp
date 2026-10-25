#include<bits/stdc++.h>
using namespace std;
int n,e;
int a[15][15];
bool bj[15];
int x,y;
int q[15];
int main(){
	cin>>n>>e;
	for(int i=1;i<=e;i++){
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	
	cout<<1<<" ";
	int h=1,t=1;
	q[1]=1;
	bj[1]=true;
	while(h<=t){
		x=q[h];
		for(int i=1;i<=n;i++){
			if(a[x][i]==1 && !bj[i]){
				cout<<i<<" ";
				t++;
				q[t]=i;
				bj[i]=true;
			}
		}
		h++;
	}
	return 0;
}



