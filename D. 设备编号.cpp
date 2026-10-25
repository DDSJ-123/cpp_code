#include<bits/stdc++.h>
using namespace std;
struct pp{
	int p,y;
	int id;
	string bm;
}a[100005];
int n,m;
bool cmp(pp lp1,pp lp2){
	if(lp1.p!=lp2.p) return lp1.p<lp2.p;
	return lp1.y<lp2.y;
}
bool cmp2(pp lp1,pp lp2){
	return lp1.id<lp2.id;
}
void js(int i,int sum){
	int ls=a[i].p,las=sum;
	int zs=6,zas=6;
	while(ls){
		zs--;
		ls/=10;
	}
	while(las){
		zas--;
		las/=10;
	}
	for(int j=1;j<=zs;j++){
		a[i].bm+='0';
	}
	a[i].bm+=to_string(a[i].p);
	for(int j=1;j<=zas;j++){
		a[i].bm+='0';
	}
	a[i].bm+=to_string(sum);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i].p>>a[i].y;
		a[i].id=i;
	}
	sort(a+1,a+m+1,cmp);
	int sum=1;
	for(int i=1;i<m;i++){
		js(i,sum);
		if(a[i].p!=a[i+1].p){
			sum=0;
		}
		sum++;
	}
	js(m,sum);
	sort(a+1,a+m+1,cmp2);
	for(int i=1;i<=m;i++){
		cout<<a[i].bm<<"\n";
	}
	return 0;
}



