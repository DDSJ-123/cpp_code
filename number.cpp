#include<bits/stdc++.h>
using namespace std;
string s;
long long cd,sum=1;
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	cin>>s;
	cd=s.size()-1;
	for(int i=1;i<=cd;i++){
		if(s[i]=='0') sum--;
		sum+=i;
	}
	printf("%lld",sum);
	return 0;
}

