#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[1005];
struct pp{
	int x,y,l;
}b[10005];
int find(int x){
	return a[x]==x?x:a[x]=find(a[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) a[fx]=fy;
}
bool cmp(pp lp,pp pl){
	return lp.l<pl.l;
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	for(int i=1;i<=m;i++){
		cin>>b[i].x>>b[i].y>>b[i].l;
	}
	sort(b+1,b+m+1,cmp);
	int sum=0;
	int answ=n-k;
	for(int i=1;i<=m;i++){
		if(find(b[i].x)!=find(b[i].y)){
			sum+=b[i].l;
			answ--;
			merge(b[i].x,b[i].y);
		}
		if(answ==0){
			break;
		}
	}
	if(answ!=0){
		cout<<"No Answer";
	}else{
		cout<<sum;		
	}

	return 0;
}



