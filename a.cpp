#include<bits/stdc++.h>
using namespace std;
int n,l,r,ma=INT_MIN;
int main(){
	scanf("%d%d%d",&n,&l,&r);
	for(int i=l;i<=r;i++){
		int s=i%n;
		ma=max(s,ma);
	}
	printf("%d",ma);
	return 0;
}
