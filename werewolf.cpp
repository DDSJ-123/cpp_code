#include<bits/stdc++.h>
using namespace std;
long long n;
struct pp{
	long long z;
	int id;
}a[1000005]; 
bool cmp(pp x,pp y){
	return x.z<y.z;
}
int main(){
	freopen("werewolf.in","r",stdin);
	freopen("werewolf.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i].z);
		a[i].id=i;
	} 
	sort(a+1,a+n+1,cmp);
	printf("%lld",a[1].id);
	return 0;
}


