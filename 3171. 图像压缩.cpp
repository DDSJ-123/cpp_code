#include<bits/stdc++.h>
using namespace std;
int n;
char sr1,sr2;
map<string,int> m;
string s[25][25],sr; 
int a[25][25];
int js(string lok){
	int mk=0;
	if(lok[0]>='0' && lok[0]<='9') mk+=int(lok[0]-'0');
	else if(lok[0]=='A') mk+=10;
	else if(lok[0]=='B') mk+=11;
	else if(lok[0]=='C') mk+=12;
	else if(lok[0]=='D') mk+=13;
	else if(lok[0]=='E') mk+=14;
	else mk+=15;
	int mko=0;
	if(lok[1]>='0' && lok[1]<='9') mko+=int(lok[1]-'0');
	else if(lok[1]=='A') mko+=10;
	else if(lok[1]=='B') mko+=11;
	else if(lok[1]=='C') mko+=12;
	else if(lok[1]=='D') mko+=13;
	else if(lok[1]=='E') mko+=14;
	else mko+=15;
	return mk+mko*16;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>sr1>>sr2;
			sr+=sr1;
			sr+=sr2;
			s[i][j]=sr;
			a[i][j]=js(sr);
			m[sr]++;
		}
	}
	cout<<s[n][n]<<' ';
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<"\n";
	}
	return 0;
}


