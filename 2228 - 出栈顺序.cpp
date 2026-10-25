#include<bits/stdc++.h>
using namespace std;
void pd(int n,int a[]){
	stack<int> t;
	int i=1,nn=0;
	while(i!=n+1 && nn<=n){
		if(t.size()==0 || t.top()!=a[i]){
			nn++;
			t.push(nn);
		}else{
			t.pop();
			i++;
		}
	}
	if(t.size()==0) cout<<"Yes\n";
	else cout<<"No\n";
}
int lz,ln,la[105];
int main(){
	cin>>lz;
	while(lz--){
		cin>>ln;
		for(int i=1;i<=ln;i++) cin>>la[i];
		pd(ln,la);
	}
	return 0;
}


