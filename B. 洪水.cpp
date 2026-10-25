#include<bits/stdc++.h>
using namespace std;

char sr[1005][1005];
int ans;
int n;

int zx[4]={1,0,-1,0};
int zy[4]={0,1,0,-1};

void dfs(int x,int y){
    sr[x][y]='Y';
    for(int i=0;i<4;i++){
        int tx=zx[i]+x;
        int ty=zy[i]+y;
        if(tx>0 && tx<=n && ty>0 && ty<=n && sr[tx][ty]=='.'){
            dfs(tx,ty);
        }
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>sr[i][j];
        }
    }
    dfs(1,1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(sr[i][j]=='Y') ans++;
        }
    }
    cout<<ans;
    return 0;
}