#include<bits/stdc++.h>
using namespace std;
long long n,zx;
int main(){
    cin>>n;
    zx=n;
    for(int i=1;i<=3;i++){
    	long long s,z;
    	cin>>s>>z;
    	if(n>=s && n-z<zx){
    		zx=n-z;
		}
	}
	cout<<zx;
	return 0;
}

