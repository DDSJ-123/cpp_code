#include<bits/stdc++.h>
using namespace std;
int n;
map<int,int> m;
int main(){
	cin>>n;
	cout<<n<<"=";
	int s=2;
	while(n>=2){
		if(n%s==0){
			n/=s;
			m[s]++;
		}else{
			s++;
		}
	} 
	auto it=m.begin();
	int zs=it->first;
	int a=it->second;
	if(a==1) cout<<zs;
	else cout<<zs<<'^'<<a;
	it++;
	for(;it!=m.end();it++){
		zs=it->first;
		a=it->second;
		cout<<"*";
		if(a==1) cout<<zs;
		else cout<<zs<<'^'<<a;
	}
	return 0;
}


