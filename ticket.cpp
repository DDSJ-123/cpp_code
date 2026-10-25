#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N];
int n,d,p;
int ans;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	
	freopen("ticket.in","r",stdin);
	freopen("ticket.out","w",stdout);
	
	cin>>n>>d>>p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int sy_d=0,ls=0,ls_gs=0;
	for(int i=1;i<=n;i++){
		if(sy_d<=0){
			ls+=a[i];
			ls_gs++;
			if(ls_gs>d){
				ans+=ls;
				ls=0;
				ls_gs=0;
			}else if(ls>=p){
				ans+=p;
				ls=0;
				sy_d=(d-ls_gs);
				ls_gs=0;
			}
		}else{
			sy_d--;
		}
	}
	ans+=ls;
	cout<<ans;
	return 0;
}



