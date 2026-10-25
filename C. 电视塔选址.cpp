#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[105][105];
int x,y,ans;

int js(int x,int y){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=a[i][y];
        sum+=a[x][i];
    }
    for(int i=1;i<=n;i++){
        if(x+i<=n && y+i<=n){
            sum+=a[x+i][y+i];
        }
        if(x-i>=1 && y-i>=1){
            sum+=a[x-i][y-i];
        }
        if(x+i<=n && y-i>=1){
            sum+=a[x+i][y-i];
        }
        if(x-i>=1 && y+i<=n){
            sum+=a[x-i][y+i];
        }
    }
    return sum-a[x][y];
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>x>>y;
        a[x][y]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(js(i,j)==k){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}