#include<bits/stdc++.h>
using namespace std;
long long a,b,sum=0;
int main(){
    scanf("%lld%lld",&a,&b);
    if(a==0) sum++;
    for(int i=2;i<=63;i++){
    	for(int j=1;j<i;j++){   
    	    long long r=0,t=1;
    	    for(int k=1;k<=i;k++){
    	    	if(k!=j) r+=t;
    	    	t*=2;
			}
			if(r>=a && r<=b){
				sum++;
			}
		}
	}
    printf("%lld",sum);
	return 0;
}

