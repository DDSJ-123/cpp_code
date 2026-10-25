#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		s*=i;
		m+=s; 
	} 
	cout<<m;
	return 0;
}
