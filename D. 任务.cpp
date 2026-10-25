#include<bits/stdc++.h>
using namespace std;
int a[105][105];
bool bj[105];
int ma;
int n,m,k;
struct pp{
	int c,d;
}lp[105]; 
void js(){
	int ans=0;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=k;j++){
			if(i!=j){
				int ml,mk;
				if(bj[i]){
					ml=lp[i].c;
				}else{
					ml=lp[i].d;
				}
				if(bj[j]){
					mk=lp[i].c;
				}else{
					mk=lp[i].d;
				}
				if(a[ml][mk]>0){
					ans+=a[ml][mk];
				}
			}
		}
	}
	ma=max(ma,ans);
}
void dfs(int w){
	if(w==k+1){
		js();
		return ;
	}
	for(int i=1;i<=2;i++){
		if(i==1) bj[w]=true;
		else bj[w]=false;
		dfs(w+1);
	}
}
int main(){
	cin>>n>>m;
	int al,bl;
	for(int i=1;i<=m;i++){
		cin>>al>>bl;
		a[al][bl]++;
	}
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>lp[i].c>>lp[i].d;	
	}
	dfs(1);
	cout<<ma;
	return 0;
}



