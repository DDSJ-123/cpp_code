#include<bits/stdc++.h>
using namespace std;

const int N = 100005;

struct node{
    int to,next;
}a[N];

int head[N],cnt=1;

void add(int u,int v){
    a[cnt].to=v;
    a[cnt].next=head[u];
    head[u]=cnt;
    cnt++;
}

int n,q;
int x,y,mi;
bool bj[N];

void js(int s,int z){
    if(s==y){
        mi=min(mi,z);
        return;
    }
    bj[s]=true;
    for(int i=head[s];i!=-1;i=a[i].next){
        if(!bj[a[i].to]){
            js(a[i].to,z+1);
        }
    }
    bj[s]=false;
    return ;
}

int main(){
    
    freopen("meet.in","r",stdin);
    freopen("meet.out","w",stdout);
    
    memset(head,-1,sizeof(head));

    cin>>n>>q;
    for(int i=1,srx,sry;i<n;i++){
        cin>>srx>>sry;
        add(srx,sry);
        add(sry,srx);
    }
    while(q--){
        cin>>x>>y;
        mi=INT_MAX;
        js(x,0);
        if(mi%2==0){
            cout<<"Meet at the intersection!\n";
        }else{
            cout<<"Meeting on the road!\n";
        }
    }
    return 0;
}