#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
char pd(string lz){
	if(lz=="0000") return '0';
	if(lz=="0001") return '1';
	if(lz=="0010") return '2';
	if(lz=="0011") return '3';
	if(lz=="0100") return '4';
	if(lz=="0101") return '5';
	if(lz=="0110") return '6';
	if(lz=="0111") return '7';
	if(lz=="1000") return '8';
	if(lz=="1001") return '9';
	if(lz=="1010") return 'A';
	if(lz=="1011") return 'B';
	if(lz=="1100") return 'C';
	if(lz=="1101") return 'D';
	if(lz=="1110") return 'E';
	if(lz=="1111") return 'F';
}
int main(){
	scanf("%lld",&n);
	if(n==0){
		cout<<"00";
		return 0;
	}
	while(n!=0){
		if(n%2==0) s+='0';
		else s+='1';
		n/=2;
	}
	if(s.size()%7!=0){
		int lkj=7-s.size()%7;
		for(int i=1;i<=lkj;i++) s+='0';
	}
	string s1="",s2="";
	for(int i=0;i<s.size()/7;i++){
		s2="";
		if(i==s.size()/7-1) s1="0";
		else s1="1";
		for(int j=6+7*i,w=1;j>=0+7*i;j--,w++){
			if(w<=3) s1+=s[j];
			else s2+=s[j];
		}
		cout<<pd(s1)<<pd(s2)<<" ";
	}
	return 0;
}


