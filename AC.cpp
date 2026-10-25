#include<bits/stdc++.h>
using namespace std;
string s;
long long a,c,ans;
int main(){
	freopen("ac.in","r",stdin);
	freopen("ac.out","w",stdout);
	cin>>s;
	for(long long i=0;i<s.size();i++){
		if(s[i]=='A') a++;
		if(s[i]=='C'){
			c++;
			ans+=a;
		}
	}
	if((a==0 && c==0) || ans==0) cout<<"No";
	else if(ans==1) cout<<"Yes";
	else cout<<"YesYesYes!";
	return 0;
}

