#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int za[N][3];
int n,m;
int dx[5]={0,0,1,0,-1};
int dy[5]={0,1,0,-1,0};
bool pd(int tx,int ty){
	for(int i=1;i<=n;i++){
		if(za[i][1]==tx && za[i][2]==ty) return 0;
	}
	return 1;
}
int main(){
    cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>za[i][1]>>za[i][2];
	}  
	int t,sum,x=0,y=0,ans=INT_MIN,fx=1;
	for(int i=1;i<=m;i++){
		cin>>t;
		sum+=t;
		if(t==-2){
			fx--;
			if(fx==0) fx=4;
		}else if(t==-1){
			fx++;
			if(fx==5) fx=1;
		}else{
			while(t--){
				if(pd((x+dx[fx]),(y+dy[fx]))){
					x+=dx[fx];
					y+=dy[fx];
					ans=max(ans,x*x+y*y);
				}else{
					break;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

