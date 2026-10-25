#include<bits/stdc++.h>
using namespace std;
long long a[200]; 
double l,ma=0,mn;
int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	a[0]=1;
	a[10]=10000;
	for(int i=1;i<=9;i++){
		scanf("%lld",&a[i]);
		l=a[i]*1.0/a[i-1];
		if(l>ma){
			ma=l;
			mn=i;
		}
	}
	l=a[10]*1.0/a[9];
	if(l>ma){
		ma=l;
		mn=10;
	}
	cout<<mn;
	return 0;
}

