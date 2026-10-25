#include<bits/stdc++.h>
using namespace std;
string zh(int n){
	if(n==0) return "0";
	else return "1";
}
string s;
int n; 
int main(){
    cin>>n;
    if(n==0){
    	cout<<0;
	}else{
		while(n!=0){
			s+=zh(n%2);
			n/=2;
		}
		reverse(s.begin(),s.end());
		cout<<s;
	}
	return 0;
}

