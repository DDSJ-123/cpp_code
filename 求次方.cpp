#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s=1;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		s*=m;
	} 
	cout<<s;
	return 0;
}
