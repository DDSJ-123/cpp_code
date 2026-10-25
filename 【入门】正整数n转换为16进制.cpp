#include<bits/stdc++.h>
using namespace std;
string zh(int n){
	if(n<10){
		return to_string(n);
	}
	if(n==10) return "A";
	if(n==11) return "B";
	if(n==12) return "C";
	if(n==13) return "D";
	if(n==14) return "E";
	if(n==15) return "F";
}
string s;
long long n; 
int main(){
    cin>>n;
    if(n==0){
    	cout<<0;
	}else{
		while(n!=0){
			s+=zh(n%16);
			n/=16;
		}
		reverse(s.begin(),s.end());
		cout<<s;
	}
	return 0;
}

