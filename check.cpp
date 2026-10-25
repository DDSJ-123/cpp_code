#include<bits/stdc++.h>
using namespace std;
int n;
string s;
map<string,int> m;
int main(){
	freopen("check.in","r",stdin);
	freopen("check.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>s;
		m[s]++;
	}
	cin>>s;
	int s1=m.size();
	m[s]++;
	if(s1==m.size()){
		cout<<"Perfect";
	}else{
		cout<<"Error";
	}
	return 0;
}


