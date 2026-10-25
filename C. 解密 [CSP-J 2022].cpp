#include<bits/stdc++.h>
using namespace std;
long long k,n,d,e;
int main(){
    scanf("%lld",&k);
    while(k--){
    	scanf("%lld%lld%lld",&n,&d,&e);
    	long long m=n-e*d+2;
    	long long p=(sqrt(m*m-4*n)+m)/2;
    	long long q=m-p;
    	if(p*q==n){
    		cout<<q<<" "<<p<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

