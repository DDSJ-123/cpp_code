#include<bits/stdc++.h>
using namespace std;
stack<char> s;
string a;
int main(){
    cin>>a;
    for(int i=0;i<a.size();i++){
    	if(a[i]=='[' || a[i]=='('){
    		s.push(a[i]);
		}else if(a[i]==']' && s.top()=='['){
			s.pop();
		}else if(a[i]==')' && s.top()=='('){
			s.pop();
		}else{
			cout<<"no";
			return 0;
		}
	}
	if(s.size()!=0) cout<<"no";
	else cout<<"yes";
	return 0;
}

