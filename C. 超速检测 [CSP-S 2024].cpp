#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct node{
	int d,v,a;
}a[N];
struct rrr{
	int b,e;
}b[N];
int p[N];
int n,m,len,v;
int cnt,res,T; 
int pf(int x){
	return x*x;
}
bool check(int di,int vi,int ai,int ed){
	return pf(vi)+2*ai*(ed-di)>pf(v);
} 

pair<int,int> find(int di,int vi,int ai){
	int t=lower_bound(p+1,p+m+1,di)-p;
	if(ai>0){
		int l=t,r=m,mid;
		while(l<=r){
			mid=l+r >> 1;
			if(check(di,vi,ai,p[mid])) r=mid-1;
			else l=mid+1; 
		} 
		return {l,m};
	} 
	if(ai<0){
		int l=t,r=m,mid;
		while(l<=r){
			mid=l+r >> 1;
			if(check(di,vi,ai,p[mid])) l=mid+1;
			else r=mid-1; 
		} 
		return {t,l-1};
	} 
}
bool cmp(rrr r1,rrr r2){
	return r1.e<r2.e;
}
int solve(){
	sort(b+1,b+cnt+1,cmp);
	int res=0,last=-1;
	for(int i=1;i<=cnt;i++){
		if(b[i].b>last){
			res++;
			last=b[i].e;
		}
	} 
	return m-res;	
} 
int main( )
{
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d%d",&n,&m,&len,&v);
		for(int i=1;i<=n;i++) scanf("%d%d%d",&a[i].d,&a[i].v,&a[i].a);
		for(int i=1;i<=m;i++)   scanf("%d",&p[i]);
		cnt=0;
		int c0=0,c1=0;
		for(int i=1;i<=n;i++){
			if(a[i].a==0) c0++;
			else if(a[i].a>0) c1++;
			if(a[i].d>p[m]) continue;   
			if(a[i].v>v && a[i].a==0){
				int st=lower_bound(p+1,p+m+1,a[i].d)-p;
				b[++cnt]={st,m};
				continue;
			} 
			if(a[i].v<=v && a[i].a<=0) continue;
			if(a[i].a>0 && !check(a[i].d,a[i].v,a[i].a,p[m])) continue;
			int t=lower_bound(p+1,p+m+1,a[i].d)-p;
			if(a[i].a<0 && !check(a[i].d,a[i].v,a[i].a,p[t])) continue;
			pair<int,int> pos=find(a[i].d,a[i].v,a[i].a); 
			cnt++;
			b[cnt]={pos.first,pos.second};
		}
		if(c0==n || c1==n){
			if(cnt==0) res=m;
			else res=m-1;
		} 
		else res=solve(); 
		printf("%d %d\n",cnt,res); 
	}
    return 0;
}


