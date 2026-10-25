#include<bits/stdc++.h>
using namespace std;
int main(){
	char n;
	cin>>n;
	if((n>='a' && n<='y')||(n>='A' && n<='Y')){
		cout<<char(n+1); 
	}
	if(n=='z'){
		cout<<"a";
	}
	if(n=='Z'){
		cout<<"A";
	}
	return 0;
}
