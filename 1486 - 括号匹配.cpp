#include<bits/stdc++.h>
using namespace std;
stack<char> t;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(' || s[i]=='[') t.push(s[i]); 
		else if(s[i]==')' && t.top()=='(') t.pop();
		else if(s[i]==']' && t.top()=='[') t.pop();
		else{
			cout<<"no";
			return 0;
		}
	}
	if(t.size()==0) cout<<"yes";
	else cout<<"no";
	return 0;
}


