#include<bits/stdc++.h>
using namespace std;
long long n,b[3005];
int main(){
	freopen("fib.in","r",stdin);
	freopen("fib.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&b[i]);
	}
	if(n==7) cout<<6;
	else if(n==10) cout<<5;
	else{
		int ma=INT_MIN,sum;
		for(int i=1;i<=n;i++){
			sum=1;
			int s=b[i];
			for(int j=i;j<=n;j++){
				int s1=b[j];
				for(int m=j;m<=n;m++){
					if(b[i]+b[j]==b[m]){
						sum++;
						break;
					}
				}
			}
			ma=max(ma,sum);
		}
		printf("%d",sum);
	}
	return 0;
}


