#include<bits/stdc++.h>
using namespace std;
int n,ma=0;
int a[2005];
struct pp{
	int x,y,z;
}b[10005]; 
int c[105][105];
int ans;
bool cmp(pp lp,pp pl){
	return lp.z<pl.z;
}
int find(int x){
	return a[x]==x?x:a[x]=find(a[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) a[fx]=fy;
}
int main(){
	cin>>n>>ans;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	for(int i=1;i<=ans;i++){
		cin>>b[i].x>>b[i].y>>b[i].z;
	}
	sort(b+1,b+ans+1,cmp);
	int sum=0;
	int answ=n-1;
	for(int i=1;i<=ans;i++){
		if(find(b[i].x)!=find(b[i].y)){
			sum+=b[i].z;
			answ--;
			merge(b[i].x,b[i].y);
			ma=max(ma,b[i].z);
		}
		if(answ==0){
			break;
		}
	}
	cout<<ma;
	return 0;
}



