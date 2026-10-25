#include<bits/stdc++.h>
using namespace std;
const int N=20000005;
int x,y,m;
int f1[N],f2[N],f3[N];
int n1,n2,n3,n4;
struct lp{
	long long i,zd;
}a[N],b[N],c[N],d[N];
int find1(int x){
	if(f1[x]==x) return x;
	else return f1[x]=find1(f1[x]);
}
void merge1(int x,int y){
	int fx=find1(x);
	int fy=find1(y);
	if(fx!=fy){
		f1[fx]=fy;
	}
}
int find2(int x){
	if(f2[x]==x) return x;
	else return f2[x]=find2(f2[x]);
}
void merge2(int x,int y){
	int fx=find2(x);
	int fy=find2(y);
	if(fx!=fy){
		f2[fx]=fy;
	}
}
int find3(int x){
	if(f3[x]==x) return x;
	else return f3[x]=find3(f3[x]);
}
void merge3(int x,int y){
	int fx=find3(x);
	int fy=find3(y);
	if(fx!=fy){
		f3[fx]=fy;
	}
}
bool cmp(lp o,lp o1){
	return o.zd<o1.zd;
}
int main(){
	/*
	freopen("battle.in","r",stdin);
	freopen("battle.out","w",stdout);
	*/
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	for(int i=1;i<=n1;i++) scanf("%lld",&a[i].zd),a[i].i=i;
	for(int i=1;i<=n2;i++) scanf("%lld",&b[i].zd),b[i].i=i;
	for(int i=1;i<=n3;i++) scanf("%lld",&c[i].zd),c[i].i=i;
	for(int i=1;i<=n4;i++) scanf("%lld",&d[i].zd),d[i].i=i;
	for(int i=1;i<=max(max(n1,n2),max(n3,n4));i++) f1[i]=i,f2[i]=i,f3[i]=i;
	scanf("%d",&m);
	for(int j=1;j<=m;j++){
		cin>>x>>y;
		merge1(x,y);
	}
	scanf("%d",&m);
	for(int j=1;j<=m;j++){
		cin>>x>>y;
		merge2(x,y);
	}
	scanf("%d",&m);
	for(int j=1;j<=m;j++){
		cin>>x>>y;
		merge3(x,y);
	}
	sort(a+1,a+n1+1,cmp);
	sort(b+1,b+n2+1,cmp);
	sort(c+1,c+n3+1,cmp);
	sort(d+1,d+n4+1,cmp);
	for(int i=1;i<=n1;i++){
		for(int j=1;j<=n2;j++){
			if(find1(a[i].i)==find1(b[j].i)) continue; 
			else for(int k=1;k<=n3;k++){
				if(find2(b[j].i)==find2(c[k].i)) continue; 
				else for(int l=1;l<=n4;l++){
					if(find3(c[k].i)==find3(d[l].i)) continue;
					else printf("%lld",a[i].zd+b[j].zd+c[k].zd+d[l].zd);
					return 0; 
				}
			}
		}
	}
	cout<<-1;
	cout<<endl;
	for(int i=1;i<=n1;i++) cout<<a[i].zd<<" ";
	cout<<endl;
	for(int i=1;i<=n2;i++) cout<<b[i].zd<<" ";
	cout<<endl;
	for(int i=1;i<=n3;i++) cout<<c[i].zd<<" ";
	cout<<endl;
	for(int i=1;i<=n4;i++) cout<<d[i].zd<<" ";
	return 0;
}

