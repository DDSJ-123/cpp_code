#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
struct node{
	int z,tm;	 
};
node h[N],l[N];
int t,n,m,q,opt,x,c;
int main(){
    scanf("%d",&t);
    while(t--){
    	memset(h,0,sizeof(h));
    	memset(l,0,sizeof(l));
    	scanf("%d%d%d",&n,&m,&q);
    	for(int i=1;i<=q;i++){
    		scanf("%d%d%d",&opt,&x,&c);
    		if(opt==0) h[x].z=c,h[x].tm=i;
    		else l[x].z=c,l[x].tm=i;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(h[i].tm>l[j].tm) printf("%d ",h[i].z);
				else printf("%d ",l[j].z);
			}
			printf("\n");
		}
	}
    return 0;
}

