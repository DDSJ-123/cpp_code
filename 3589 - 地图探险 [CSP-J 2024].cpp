#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

char a[N][N];
bool bj[N][N];
int ans;
int t;
int n,m,k;
int nx,ny,nb;

int ay[4]={1,0,-1,0};
int ax[4]={0,1,0,-1};

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		memset(bj,0,sizeof(bj));
		cin>>n>>m>>k;
		cin>>nx>>ny>>nb;
		ans=1;
		bj[ny][nx]=true;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		while(k--){
			if(a[ny+ay[nb]][nx+ax[nb]]=='.'){
				nx=nx+ax[nb];
				ny=ny+ay[nb];
				if(!bj[ny][nx]){
					bj[ny][nx]=true;
					ans++;
				}
			}else{
				nb=(nb+1)%4;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

