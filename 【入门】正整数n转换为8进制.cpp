#include<bits/stdc++.h>
using namespace std;
string s;
long long n; 
int main(){
    cin>>n;
    if(n==0){
    	cout<<0;
	}else{
		while(n!=0){
			s+=to_string(n%8);
			n/=8;
		}
		reverse(s.begin(),s.end());
		cout<<s;
	}
	return 0;
}

