#include<bits/stdc++.h>
using namespace std;
int n,m,sum,ans;
const int N=100;
char a[N][N];
bool pd(int x,int y){
	if(a[x-1][y]=='#' && a[x+1][y]=='#') return true;
	if(a[x][y-1]=='#' && a[x][y+1]=='#') return true;
	if(a[x-1][y-1]=='#' && a[x+1][y+1]=='#') return true;
	if(a[x-1][y+1]=='#' && a[x+1][y-1]=='#') return true;	
	if(a[x-1][y]=='#' && a[x-2][y]=='#') return true;
	if(a[x+1][y]=='#' && a[x+2][y]=='#') return true;
	if(a[x][y-1]=='#' && a[x][y-2]=='#') return true;
	if(a[x][y+1]=='#' && a[x][y+2]=='#') return true;
	if(a[x-1][y-1]=='#' && a[x-2][y-2]=='#') return true;
	if(a[x-1][y+1]=='#' && a[x-2][y+2]=='#') return true;
	if(a[x+1][y+1]=='#' && a[x+2][y+2]=='#') return true;
	if(a[x+1][y-1]=='#' && a[x+2][y-2]=='#') return true;
	return false;
} 
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>a[i][j];
    		if(a[i][j]=='#'){
    			ans++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='.'){
				if(pd(i,j)){
					sum++;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
