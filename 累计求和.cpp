#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s=1;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		s*=i;
	} 
	cout<<s;
	return 0;
}
