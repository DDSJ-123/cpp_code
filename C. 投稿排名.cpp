#include<bits/stdc++.h>
using namespace std;

const int N = 105;
struct pp{
	string zt;
	int fs;
	int id;
	int cz;
}a[N];

int n;

bool cmp1(pp ax,pp bx){
	if(ax.zt!=bx.zt) return ax.zt<bx.zt;
	return ax.fs>bx.fs;
}

bool cmp2(pp ax,pp bx){
	return ax.id<bx.id;
}

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].zt>>a[i].fs;
		a[i].id=i;
	}
	
	sort(a+1,a+n+1,cmp1);
	
	for(int i=1;i<=n;i++){
		a[i].cz=i;
	}
	
	sort(a+1,a+n+1,cmp2);
	
	for(int i=1;i<=n;i++){
		cout<<a[i].cz<<"\n";
	}
	return 0;
}



