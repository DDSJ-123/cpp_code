#include<bits/stdc++.h>
using namespace std;
string s;
void js(string lz,int n){
	//cout<<lz<<"\n";
	if(n/2==0){
		cout<<lz.size();
	}else{
		n/=2;
		lz+=to_string(n);
		js(lz,n); 
	}
}
int main(){
	cin>>s;
	js(s,stoi(s));
	return 0;
}



