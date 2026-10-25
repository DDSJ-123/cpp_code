#include<bits/stdc++.h>
using namespace std;
long long n,n1,ans=0;
int main(){
    cin>>n>>n1;
    for(int i=n;i<=n1;i++){
    	if(i%10==i/10000000 && i/10%10==i/1000000%10 && i/100%10==i/100000%10 && i/1000%10==i/10000%10){
    		ans++;
		}		
	}
	cout<<ans;
	return 0;
}

