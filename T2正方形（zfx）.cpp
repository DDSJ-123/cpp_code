#include<bits/stdc++.h>
using namespace std;
long long n,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=i*i;
	}
	cout<<s;
	return 0;
}

