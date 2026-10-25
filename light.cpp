#include<bits/stdc++.h>
using namespace std;

const int N = 105;
int n,m;
char a[N][N];
bool bj[N][N];
int ans;

int ax[4]={1,0,-1,0};
int ay[4]={0,1,0,-1};

struct pp{
	int nx,mx;
	int z;
}b[N*N];
int k;

void js(int x,int y,int z){
	bj[x][y]=true;
	for(int i=0;i<4;i++){
		int bx=x,by=y;
		for(int j=1;j<=z;j++){
			bx+=ax[i];
			by+=ay[i];
			if(a[bx][by]=='.' || (a[bx][by]>='0' && a[bx][by]<='9')){
				if(!bj[bx][by] && a[bx][by]=='.'){
					ans++;
				}
				bj[bx][by]=true; 
			}else if(a[bx][by]=='#' || bx>n || by>m || bx<1 || by<1){
				break;
			}
		}
	} 
	return ;
}

int main(){
	
	freopen("light.in","r",stdin);
	freopen("light.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			bj[i][j]=false;
			if(a[i][j]>='0' && a[i][j]<='9'){
				k++;
				b[k].nx=i;
				b[k].mx=j;
				b[k].z=int(a[i][j]-'0');
			}
		}
	}
	
	while(k){
		js(b[k].nx,b[k].mx,b[k].z);
		k--;
	}
	
	cout<<ans;
	return 0;
}



