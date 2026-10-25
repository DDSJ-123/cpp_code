#include<bits/stdc++.h>
using namespace std;

int t;
int n;
int a[1005];

int mi,ma;

int cl(int x,int y){
    int l=(x+y)/2;
    if((y-x+1)%2==0){
        return a[l]+a[l+1];
    }
    return a[l];
}

void js(int be,int en,int v){
    if(be>=0 && en<=n){
        v+=cl(be,en);
    }
    if(en==n){
        mi=min(mi,v);
        ma=max(ma,v);
        return;
    }
    if(en>n){
        return;
    }
    for(int i=1;i<=n;i++){
        if(en+i>n || en+1>n) break;
        js(en+1,en+i,v);
    }
    return;
}

int main(){
    
    freopen("middle.in","r",stdin);
    freopen("middle.out","w",stdout);
    
    cin>>t;
    while(t--){
        mi=INT_MAX,ma=INT_MIN;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            js(1,i,0);
        }
        cout<<mi<<" "<<ma<<"\n";
    }
    

    return 0;
}