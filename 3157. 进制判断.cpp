#include<bits/stdc++.h>
using namespace std;
string s;
int n,ma;
int pd(char a){
	if(a>='0' && a<='9') return a-'0';
	if(a=='A') return 10;
	if(a=='B') return 11;
	if(a=='C') return 12;
	if(a=='D') return 13;
	if(a=='E') return 14;
	if(a=='F') return 15;
	return 100;
}
int main(){
	cin>>n;
	while(n--){
		cin>>s;
		ma=0;
		for(int i=0;i<s.size();i++){
			ma=max(ma,pd(s[i]));
		}
		if(ma>=2){
			cout<<0<<" ";
		}else{
			cout<<1<<" ";
		}
		if(ma>=8){
			cout<<0<<" ";
		}else{
			cout<<1<<" ";
		}
		if(ma>=10){
			cout<<0<<" ";
		}else{
			cout<<1<<" ";
		}
		if(ma>=16){
			cout<<0<<" ";
		}else{
			cout<<1<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

