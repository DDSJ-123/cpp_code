#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000005]; 
int main(){
	freopen("change.in","r",stdin);
	freopen("change.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n==1) cout<<1<<"\n";
		else if(n==2) cout<<3<<"\n";
		else printf("%d\n",n-1); 
	}
	return 0;
}


