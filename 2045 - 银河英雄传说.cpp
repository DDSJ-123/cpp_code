#include<bits/stdc++.h>
using namespace std;
long long p;
long long f[50005],dis[50005],len[50005];
char sr;
long long x,y;

long long find(long long x){
	if(f[x]==x) return x;
	else{
		long long t=f[x];
		f[x]=find(f[x]);
		dis[x]+=dis[t];
		return f[x]; 
	}
}
void merge(long long x,long long y){
	long long fx=find(x);
	long long fy=find(y);
	if(fx!=fy){
		f[fx]=fy;
		dis[fx]+=len[fy]; 
		len[fy]+=len[fx];
		len[fx]=0;
	}
} 

int main(){
	scanf("%lld",&p);
	for(long long i=0;i<=30000;i++){
		f[i]=i;
		dis[i]=0;
		len[i]=1;
	}
	while(p--){
		scanf(" %c%lld%lld",&sr,&x,&y);
		if(sr=='C'){
			if(find(x)!=find(y)){
				printf("-1\n");
			}else{
				printf("%lld\n",abs(dis[x]-dis[y])-1);
			}
		}else{
			merge(x,y);
		}
	}
	return 0;
}



