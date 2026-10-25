#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='+') n++;
		else if(n>0) n--;
	}
	cout<<n;
	return 0;
}


