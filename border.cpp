#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

int h,w;
char a[N][N];
int jl[N][N];
int k;
struct node{
	int x,y;
	int fx[4];
}b[N*N];

int ans;
int fx_x[4]={0,1,0,-1};
int fx_y[4]={1,0,-1,0};

void cl(int kz,int xz,int z){
	b[kz].fx[z]=true;
	if(a[b[kz].x+fx_x[xz]][b[kz].y+fx_y[xz]]=='#'){
		cl(jl[b[kz].x+fx_x[xz]][b[kz].y+fx_y[xz]],xz,z);
	}
	return ;
}

int main(){
	
	freopen("border.in","r",stdin);
	freopen("border.out","w",stdout);
	
	cin>>h>>w;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>a[i][j];
			if(a[i][j]=='#'){
				k++;
				b[k].x=i;
				b[k].y=j;
				jl[i][j]=k;
			}
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=0;j<4;j++){
			if(a[b[i].x+fx_x[j]][b[i].y+fx_y[j]]=='#'){
				b[i].fx[j]=true;
			}
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=0;j<4;j++){
			if(!b[i].fx[j]){
				ans++;
				cl(i,j-1>=0?j-1:3,j);
				cl(i,j+1<4?j+1:0,j);
			}
		}
	}
	cout<<ans;
	return 0;
}



