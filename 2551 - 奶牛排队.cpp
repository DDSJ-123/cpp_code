/*
#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int t;
		cin>>t;
		if(s.size()!=0){
			while(s.top()>=t){
				s.pop(); 
			}
			if(s.size()==0) cout<<0<<" ";
			else cout<<s.top()<<" ";
			s.push(t);
		}else{
			cout<<0<<" ";
			s.push(t);
		}
	}
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int st[N],t=0;
int n,x;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		while(t!=0 && st[t]>=x) t--;
		if(t==0){
			cout<<0<<" ";
		}else{
			cout<<st[t]<<" ";
		}
		st[++t]=x;
	}
}
