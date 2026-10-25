#include<bits/stdc++.h>
using namespace std;
long long m,n,s1,n1;
int main(){
	cin>>n>>m;
	if(n==m){
		cout<<0;
	}else{
		s1=m;
		n1=n-m;
		cout<<abs(min(s1,n1));
	}
	return 0;
}


