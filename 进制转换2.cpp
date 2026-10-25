#include<bits/stdc++.h>
using namespace std;
string zf="0123456789ABCDEF";
string s;
long long n,d; 
int main(){
    cin>>n>>d;
    if(n==0){
    	cout<<0;
	}else{
		while(n!=0){
			s+=zf[n%d];
			n/=d;
		}
		reverse(s.begin(),s.end());
		cout<<s;
	}
	return 0;
}

