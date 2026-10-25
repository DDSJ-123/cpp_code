#include<bits/stdc++.h>
using namespace std;
int zh(char a){
	if(a<='9') return int(a-48);
	if(a=='A') return 10;
	if(a=='B') return 11;
	if(a=='C') return 12;
	if(a=='D') return 13;
	if(a=='E') return 14;
	if(a=='F') return 15;
} 
string s;
long long sum,n=1; 
int main(){
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
    	sum+=n*zh(s[i]);
    	n*=16;
	}
	cout<<sum;
	return 0;
}

