#include<bits/stdc++.h>
using namespace std;
int n,m,c;
char a[8][8];
int b[8][8];
int sx[65],sy[65];
int k;
int mi=INT_MAX;
int zx[4]={0,1,0,-1};
int zy[4]={-1,0,1,0};
void js(int x,int y,int z){
	if(z<b[x][y] && z<=c){
		b[x][y]=z;
		if(a[x][y]=='D'){
			mi=min(mi,b[x][y]);
			return ;
		}
		for(int i=0;i<4;i++){
			int mx=x+zx[i];
			int my=y+zy[i];
			if(mx>0 && my>0 && mx<=n && my<=m && b[mx][my]>z+1 && a[mx][my]!='S' && a[mx][my]!='X'){
				z++;
				js(mx,my,z);
				z--;
			}
		}
	}
}
int main(){
	cin>>n>>m>>c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='S'){
				k++;
				sx[k]=i;
				sy[k]=j;
			}
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			for(int l=1;l<=m;l++){
				b[j][l]=INT_MAX;
			}
		}
		js(sx[i],sy[i],0);
	}
	if(mi<=c){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}



