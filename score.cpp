#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int n,t;
unsigned int a[N],aw,b;
map<unsigned int,unsigned int> m;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	scanf("%d%d",&n,&t);
	m[0]=n;
	while(t--){
		scanf("%d%d",&aw,&b);
		if(m.count(a[aw]))m[a[aw]]--;
		if(m[a[aw]]==0) m.erase(a[aw]);
		a[aw]+=b;
		m[a[aw]]++;
		cout<<m.size()<<endl;
		/*
		cout<<endl;
		for(auto it=m.begin();it!=m.end();it++){
			cout<<it->first<<" "<<it->second<<" "<<endl;
		} 
		cout<<endl;
		*/
	}	
	return 0;
}


