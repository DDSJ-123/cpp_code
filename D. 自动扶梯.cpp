#include<bits/stdc++.h>
using namespace std;
int a,b,t,n;
char c;
int main(){
	cin>>a>>b>>t>>n>>c;
	if(c=='U'){
		if(n>t){
			cout<<b+n+t;
		}else{
			cout<<n;
		}
	}else{
		cout<<n+t;
	}
	return 0;
}



