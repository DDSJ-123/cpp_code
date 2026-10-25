#include<bits/stdc++.h>
using namespace std;
int n,k;
long long s;
string sr;
int pd(char a){
	if(a>='0' && a<='9') return a-'0';
	if(a=='A') return 10;
	if(a=='B') return 11;
	if(a=='C') return 12;
	if(a=='D') return 13;
	if(a=='E') return 14;
	return 15;
}
int main(){
	cin>>n;
	while(n--){
		s=0;
		scanf("%d",&k);
		cin>>sr;
		reverse(sr.begin(),sr.end());
		for(int i=0;i<sr.size();i++){
			s=s+pow(k,i)*pd(sr[i]);
			//cout<<pow(k,i)*pd(sr[i])<<"\n";
		}
		printf("%lld\n",s);
	}
	return 0;
}


