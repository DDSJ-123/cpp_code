#include<bits/stdc++.h>
using namespace std;

int n,x,y,z;
int ans;

int main(){
    
    freopen("study.in","r",stdin);
    freopen("study.out","w",stdout);
    
    cin>>n;
    cin>>x>>y>>z;
    ans=z;
    int zw=1;
    for(int i=1;i<=y;i++){
        if(zw+20>100){
            n--;
            if(n==0){
                cout<<ans;
                return 0;
            }
            zw=21;
        }else{
            zw+=20;
            ans++;
        }
    }
    for(int i=1;i<x;i++){
        if(zw+50>100){
            n--;
            if(n==0){
                cout<<ans;
                return 0;
            }
            zw=51;
        }else{
            zw+=50;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}