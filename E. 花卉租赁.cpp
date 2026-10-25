#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005];
long long ma,mas;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++) scanf("%d",&a[i]);
	sort(a+1,a+m+1,cmp);
	ma=a[1];
	mas=a[1];
	for(int i=2;i<=min(n,m);i++){
		long long s=a[i]*i;
		if(s>=ma){
			ma=s;
			mas=a[i];
		}
	}
	printf("%d %d",mas,ma);
	return 0;
}
