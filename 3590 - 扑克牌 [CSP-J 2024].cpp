#include<bits/stdc++.h>
using namespace std;
set<string> s;
string a;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		s.insert(a);
	}
	cout<<52-s.size();
	return 0;
}

