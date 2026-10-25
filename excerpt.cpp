#include<bits/stdc++.h>
using namespace std;

const int N = 10000005;

int a[N];

string sr;
long long ans;
stack<char> s;

bool pd(int l,int r){
	if((r-l)%2==0){
		return false;
	}
	while(!s.empty()) s.pop();
	for(int i=l;i<=r;i++){
		if(sr[i]=='('){
			s.push(sr[i]);
		}else{
			if(s.empty()){
				return false;
			}else{
				s.pop();
			}
		}
	}
	return s.empty()?true:false;
}

int main(){
	
	freopen("excerpt.in","r",stdin);
	freopen("excerpt.out","w",stdout);
	
	cin>>sr;
	int l=1,r=1;
	int sz=sr.size();
	for(int i=0;i<sz;i++){
		for(int j=1;j<sz-i;j+=2){
			if(pd(i,i+j)){
				for(int k=i;k<=i+j;k++){
					a[k]++;
				}
			}
		}
	}
	for(int i=0;i<sz;i++){
		ans+=((i+1)*a[i]);
	}
	cout<<ans;
	return 0;
}



