#include<bits/stdc++.h>
using namespace std;
int f[20005];
int a[20005];
int n,m,k,z;
int srx,sry;
int find(int x){
	return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) f[fx]=fy;
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) f[i]=i;
	for(int i=1;i<=k;i++){
		cin>>srx>>sry;
		merge(sry,srx);
	}
	for(int i=1;i<=n;i++){
		a[f[i]]++;
	}
	z=a[1];
	for(int i=2;i<=n;i++){
		if(abs(m-z)>abs(m-a[i])){
			z=a[i];
		}else if(abs(m-z)==abs(m-a[i]) && z>a[i]){
			z=a[i];
		}
	}
	cout<<z;
	return 0;
}



