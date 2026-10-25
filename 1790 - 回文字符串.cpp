#include<bits/stdc++.h>
using namespace std;
int n;
string sr,ssr; 
int main(){
	cin>>n;
	cin>>sr;
	ssr=sr;
	reverse(sr.begin(),sr.end());
	if(ssr==sr){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}


