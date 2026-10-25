#include<bits/stdc++.h>
using namespace std;

int n;
int a[105];
int ans;
bool bj[105];
int jl[4];

bool pd(int z[]){
    if(z[1]==z[2] || z[1]==z[3] || z[2]==z[3]){
        return false;
    }else if(z[1]+z[2]>z[3] && z[1]+z[3]>z[2] && z[2]+z[3]>z[1]){
        return true;
    }
    return false;
}

void js(int c,int l){
    if(c==0){
        if(pd(jl)){
            ans++;
        }
    }else if(c>=1){
        for(int i=l;i<=n;i++){
            if(!bj[i]){
                bj[i]=true;
                jl[c]=a[i];
                js(c-1,i+1);
                bj[i]=false;
            }
        }
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n<3){
        cout<<0;
        return 0;
    }
    sort(a+1,a+n+1);
    js(3,1);
    cout<<ans;
    return 0;
}