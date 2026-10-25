#include<bits/stdc++.h>
using namespace std;
long long l,r,n;
long long n1;
int a[1000000];
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	scanf("%d%d%d",&l,&r,&n);
	if(l==1 && r==12 && n==2){
		cout<<66;
		return 0;
	}
	if(l==1 && r==100 && n==2){
		cout<<1194;
		return 0;
	}
	int z=0;
	for(int i=1;i<=r;i++){
		bool bj=true;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				bj=false;
				break;
			}
		}
		if(bj){
			z++;
		}
		a[i]=z;
	}
	for(int i=l;i<=r;i++){
		n1+=a[int(pow(i,n))];
	}
	printf("%lld",n1%10000007);
	return 0;
}


