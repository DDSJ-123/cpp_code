#include<bits/stdc++.h>
using namespace std;
string s[105];
int n;
bool cmp(string s1,string s2){
	if(s1+s2>s2+s1){
		return true;
	}else{
		return false;
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i]; 
	}
	sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
    	cout<<s[i];
	}
	return 0;
}

