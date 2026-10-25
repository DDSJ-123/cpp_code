#include<bits/stdc++.h>
using namespace std;
unsigned long long n;
int d;
stack<char> t;
char a[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
string s;
int main(){
	scanf("%lld%d",&n,&d);
	if(n==0){
		cout<<0;
		return 0;
	}
	while(n){
		t.push(a[n%d]);
		n/=d;
	}
	while(t.size()!=0){
		s+=t.top();
		t.pop();	
	}
	cout<<s;
	return 0;
}


