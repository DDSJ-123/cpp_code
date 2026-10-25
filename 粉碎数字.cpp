#include<bits/stdc++.h>
using namespace std;
int n;
string a,s; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		a+=s;
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());//Êı×éÄæĞò
	cout<<a;
	return 0;
}

