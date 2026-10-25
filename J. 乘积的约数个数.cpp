#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
map<int,int> m;
long long n,x,r=1;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>x;
    	for(int j=2;j<=sqrt(x);j++){
    		while(x%j==0){
    			m[j]++;
    			x/=j;
    		}
    	}
    	if(x>1) m[x]++;
	}
    for(auto it=m.begin();it!=m.end();it++){
    	long long kl=0,t=1;
		for(int i=0;i<=it->second;i++){
			kl=(kl+t)%M;
			t=(t*it->first)%M;
		}	
		r=(r*kl)%M;
	}
    printf("%lld",r);
    return 0;
}
