#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	scanf("%d",&n);
	cin>>s;
	if(n==1){
		cout<<"No";
		return 0;
	}
	string s1=s.substr(0,n/2);
	string s2=s.substr(n/2,n);
	//cout<<s1<<" "<<s2<<endl;
	if(s1==s2) cout<<"Yes";
	else cout<<"No";
	return 0;
}

