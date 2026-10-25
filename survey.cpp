#include<bits/stdc++.h>
using namespace std;

const int N = 505;
int a[N][N];
bool bj[N][N];
bool pd1;
int n,m;
int t,mid;
int ans;
int ax[4]={1,0,-1,0};
int ay[4]={0,1,0,-1};

void js(int x,int y,int gz,int hc){
	if(gz==t){
		mid=min(mid,hc);
		return ;
	}
	bj[x][y]=true;
	for(int i=0;i<4;i++){
		int bx=x+ax[i];
		int by=y+ay[i];
		if(bx>0 && bx<=n && by>0 && by<=m && !bj[bx][by]){
			js(bx,by,gz+1,max(hc,abs(a[bx][by]-a[x][y])));
		} 
	}
	bj[x][y]=false;
	return ;
}

int main(){
	
	freopen("survey.in","r",stdin);
	freopen("survey.out","w",stdout);
	
	cin>>n>>m>>t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];	
		}
	}
	for(int i=1,z;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>z;
			if(z==1){
				pd1=true;
				mid=INT_MAX;
				js(i,j,1,0);
				ans+=mid;
			}
		}
	}
	if(!pd1){
		cout<<0;
	}else{
		cout<<ans;
	}
	return 0;
}



