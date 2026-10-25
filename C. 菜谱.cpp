#include<bits/stdc++.h>
using namespace std;
string s[5];
int a[5][30];
string sr;
int t;
bool pd(string lp){
	bool a[5][5];
	int ls=lp.size();
	for(int i=0;i<lp.size();lp++){
		bool bj=false;
		for(int j=1;j<=4;j++){
			if(a[j][(lp[i]-'A'+1)]>0){
				a[i][j]=true;
				bj=true;
			}
		}
		if(bj) ls--;
	}
	if(ls!=0) return false;
	if(lp.size()==1){
		return true;
	}
	if(lp.size()==2){
		
	}
}
int main(){
	cin>>t;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		for(int j=0;j<s[i].size();j++){
			a[i][(s[i][j]-'A'+1)]++;
		}
	}
	while(t--){
		cin>>sr;
		if(pd(sr)) cout<<"YES\n"
		else cout<<"NO\n";
	}
	return 0;
}



