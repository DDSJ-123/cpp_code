#include<bits/stdc++.h>
using namespace std;

const int N = 524289;

int n,m,l;

struct node{
    int num;
    int id;
    int mc;
}a[N];

bool cmp(node ax,node ay){
    return ax.num>ay.num;
}

bool bj[N];

bool cmp1(node ax,node ay){
    if(ax.mc!=ay.mc) return ax.mc>ay.mc;
    return ax.num<ay.num;
}

bool cmp2(node ax,node ay){
    return ax.id<ay.id;
}

int main(){

    freopen("trials.in","r",stdin);
    freopen("trials.out","w",stdout);
    
    cin>>n>>m;
    l=n;
    n=pow(2,n);

    for(int i=1;i<=n;i++){
        cin>>a[i].num;
        a[i].id=i;
    }

    sort(a+1,a+n+1,cmp);

    int lw=l,ma=0;

    while(l--){
        for(int i=1;i<=n;i+=pow(2,lw-l+1)){
            if(m>pow(2,lw-l+1)){
                break;
            }
            int ans=0;
            for(int k=n;k>0;k--){
                for(int j=i;j<=i+pow(2,lw-l+1);j++){
                    if(a[k].id==j && !bj[k]){
                        ans++;
                        a[k].mc=l;
                        bj[k]=true;
                        ma=min(ma,l);
                    }
                }
                if(ans==m){
                    break;
                }
            }
        }
    }

    sort(a+1,a+n+1,cmp1);

    int js=1,mcw=1;

    bool jlk=true;
    for(int i=n;i>0;i--){
        if(a[i].mc==ma){
            if(mcw){
            }
            a[i].mc=mcw;
            mcw+=jlk;
        }else{
            jlk=false;
            mcw=max(js,mcw++);
            ma=a[i].mc;
            a[i].mc=mcw;
        }
        js++;
    }

    sort(a+1,a+n+1,cmp2);

    for(int i=1;i<=n;i++){
        cout<<a[i].mc<<" ";
    }
    return 0;
}