#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int n,a;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		m[a]++;
	}
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}

