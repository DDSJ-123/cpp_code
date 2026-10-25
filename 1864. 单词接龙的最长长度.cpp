#include<bits/stdc++.h>
using namespace std;
int n,ma,ans;
string sr[60];
string jl[60];
int bj[60];

int pd(string s1,string s2){
	int l=min(s1.size(),s2.size());
	int la=s1.size();
	for(int i=1;i<l;i++){
		if(s1.substr(la-i,i)==s2.substr(0,i)){
			return i;
		}
	}
	return 0;
}

void dfs(int w){
	for(int i=1;i<=n;i++){
		if(bj[i]<2){
			ma=max(ma,ans);
			if(w==1 && sr[i][0]==sr[0][0]){
				ans-=jl[w].size();
				jl[w]=sr[i];
				ans+=jl[w].size();
				bj[i]++;
				dfs(w+1);
				bj[i]--;
			}else{
				int j=pd(jl[w-1],sr[i]);
				if(j!=0){
					ans-=pd(jl[w-1],jl[w]);
					jl[w]=sr[i];
					ans+=pd(jl[w-1],jl[w]);
					bj[i]++;
					dfs(w+1);
					bj[i--];
				}
			}
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sr[i];
	}
	cin>>sr[0];
	dfs(1);
	cout<<ma;
	return 0;
}



