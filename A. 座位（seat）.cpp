#include<bits/stdc++.h>
using namespace std;

int n,m,wz;
struct pp{
	int cz,id;
}a[1005]; 

bool cmp(pp ax,pp bx){
	return ax.cz>bx.cz;
}

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n>>m;
	for(int i=1;i<=n*m;i++){
		cin>>a[i].cz;
		a[i].id=i;
	}
	sort(a+1,a+n*m+1,cmp);
	for(int i=1;i<=n*m;i++){
		if(a[i].id==1){
			wz=i;
			break;
		}
	}
	int s=wz/m;
	int ss=wz%m; 
	if(ss!=0) s++;
	if(ss==0) ss=m;
	if(s%2==1){
		cout<<s<<" "<<ss;
	}else{
		cout<<s<<" "<<n-ss+1;
	}
	return 0;
}



