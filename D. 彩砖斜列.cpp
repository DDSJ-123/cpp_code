#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

int a[N][N];
int n;
int b[1000005]; 
int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=n;i>0;i--){
		int ma=0;
		int x=i,y=1;
		while(x<=n && y<=n){
			b[a[x][y]]++;
			ma=max(ma,b[a[x][y]]);
			x++,y++;
		}
		cout<<ma<<"\n";
		while(x>=1 && y>=1){
			b[a[x][y]]--;
			x--,y--;
		}
	}
	for(int i=2;i<=n;i++){
		int ma=0;
		int x=1,y=i;
		while(x<=n && y<=n){
			b[a[x][y]]++;
			ma=max(ma,b[a[x][y]]);
			x++,y++;
		}
		cout<<ma<<"\n";
		while(x>=1 && y>=1){
			b[a[x][y]]--;
			x--,y--;
		}		
	}
	return 0;
}



