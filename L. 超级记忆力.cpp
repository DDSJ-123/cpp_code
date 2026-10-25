#include<bits/stdc++.h>
using namespace std;
int n,q,a[50005],b[50005],s;
int main(){
	scanf("%d%d",&n,&q);
	b[0]=-1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=b[i-1]+a[i];
	}
	while(q--){
		scanf("%d",&s);
		int p=lower_bound(b+1,b+n+1,s)-b;
		printf("%d\n",p);
	}
	return 0;
}


