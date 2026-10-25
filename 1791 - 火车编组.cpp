#include<bits/stdc++.h>
using namespace std;
stack<int> t;
int n;
int a[10000005];
string s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	int i=1,nn=0;
	while(i!=n+1){
		if(t.size()==0 || t.top()!=a[i]){
			nn++;
			t.push(nn);
			s+='A';
		}else{
			t.pop();
			s+='B';
			i++;
		}
		//if(t.size()!=0) cout<<t.top()<<"\n";
	}
	if(t.size()!=0) s+='B';
	cout<<s;
	return 0;
}


