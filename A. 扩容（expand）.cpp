#include<bits/stdc++.h>
using namespace std;
string s;
long long c;
int main(){
    cin>>s>>c;
    if(s[0]!='1' || c==1){
    	cout<<s[0];
    	return 0;
	}
	for(int i=0;i<min(c,(long long)s.size());i++){
		if(s[i]!='1'){
			cout<<s[i];
			return 0;
		}
	}
	cout<<1;
	return 0;
}

