#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N],b[N],c[N],sum,n,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		a[s]++;
	}
	for(int i=1;i<=n;i++){
		cin>>s;
		b[s]+=a[s];
	}
	for(int i=1;i<=n;i++){
		cin>>s;
		sum+=b[s];
	}
	printf("%d",sum);
	return 0;
}

