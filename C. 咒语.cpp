#include<bits/stdc++.h>
using namespace std;
int n,q;
string s; 
int main(){
	cin>>n;
	cin>>s;
	for(int i=1;i<=n/2;i++){
		for(int j=0;j<n/i;j++){
			string d=s.substr(j,i),d1=s.substr(j+i,i);
			if(d==d1) q++;
		}
	}
	if(q==0) cout<<"No";
	else cout<<"Yes";
	return 0;
}

