#include<bits/stdc++.h>
using namespace std;
int t,n;
bool pd=false;
string s[105],zh; 
int main(){
	cin>>t;
	while(t--){
		pd=true;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>s[i];
		sort(s+1,s+n+1);
		for(int i=1;i<=n;i++){
			zh+=s[i];
		}
		for(int i=1;i<zh.size();i++){
			if(zh[i-1]>zh[i]){
				pd=false;
				break;
			}
		}
		if(pd){
			cout<<1<<"\n";
		}else{
			cout<<0<<"\n";
		}
	}
	return 0;
}


