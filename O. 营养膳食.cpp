#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int kz[105];
struct pp{
	int ai,bi;
}a[205];
bool cmp(pp lp,pp llp){
	return lp.ai>llp.ai;
}
int ma;
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++){
		cin>>kz[i];
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].ai>>a[i].bi;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(kz[a[i].bi]>0){
			ma+=a[i].ai;
			kz[a[i].bi]--;
			m--;
		}
		if(m==0){
			break;
		}
	}
	cout<<ma;
	return 0;
}



