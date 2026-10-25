#include<bits/stdc++.h>
using namespace std;
int n,m,ans,sum,ma;
struct pp{
	int x,y;
}c[1005];
char a[1005][1005]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='#'){
				ans++;
				c[ans].x=i;
				c[ans].y=j;
			}
		}
	}
	sum=ans;
	for(int i=1;i<=ans;i++){
		int s=1;
		if(a[c[i].x+1][c[i].y]=='.'){
			sum++;
			s++;
		}
		if(a[c[i].x-1][c[i].y]=='.'){
			sum++;
			s++;
		}
		if(a[c[i].x][c[i].y+1]=='.'){
			sum++;
			s++;
		}
		if(a[c[i].x][c[i].y-1]=='.'){
			sum++;
			s++;
		}
		ma=max(ma,s);
	}
	//cout<<sum<<"\n";
	cout<<(n*m)-sum+ma;
	return 0;
}


