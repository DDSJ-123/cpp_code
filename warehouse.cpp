#include<bits/stdc++.h>
using namespace std;
long long n;
int sr[1000005];
char zl;
int x;
int main(){
	freopen("warehouse.in","r",stdin);
	freopen("warehouse.out","w",stdout);
	scanf("%lld",&n);
	while(n--){
		cin>>zl>>x;
		if(zl=='A'){
			if(sr[x]==0){
				sr[x]=1;
				cout<<"Yes";
			}else{
				cout<<"Error"; 
			}
		}
		if(zl=='D'){
			if(sr[x]==1){
				sr[x]=0;
				cout<<"Yes";
			}else{
				cout<<"Error";
			}
		}
		if(zl=='Q'){
			if(sr[x]==1){
				cout<<"Yes";
			}else{
				cout<<"No";
			}
		}
		cout<<endl;
	} 
	return 0;
}

