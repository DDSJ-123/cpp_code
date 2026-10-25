#include<bits/stdc++.h>
using namespace std;
long long t;
long long x,y;
int main(){
	freopen("red.in","r",stdin);
	freopen("red.out","w",stdout);
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&x,&y);
		if(x==y) cout<<0;
		else if(x>y){
			if(x%2==0 && y%2==0) cout<<1;
			if(x%2==1 && y%2==0) cout<<2;
			if(x%2==0 && y%2==1) cout<<2;
			if(x%2==1 && y%2==1) cout<<1;			
		}else if(x<y){
			if(x%2==0 && y%2==0) cout<<2;
			if(x%2==1 && y%2==0) cout<<1;
			if(x%2==0 && y%2==1) cout<<1;
			if(x%2==1 && y%2==1) cout<<2;
		}
		cout<<endl;
	} 
	return 0;
}

