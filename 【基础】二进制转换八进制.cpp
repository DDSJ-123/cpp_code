#include<bits/stdc++.h>
using namespace std;
string s,sum;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i+=3){
    	string a=s.substr(s[i],3);
    	int q=0,s1=0;
    	for(int i=0;i<3;i++){
    		if(a[i]==1) s1+=int(a[i])*pow(q,8);
		}
		sum=to_string(s1); 
	}
	cout<<sum;
	return 0;
}

