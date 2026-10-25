#include<bits/stdc++.h>
using namespace std;
vector<int> f;
int a,b,p;
set<int> ans;
int find(int x){
	return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) f[fx]=fy;
}
long long gcd(long long a,long long b){
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
} 
int main(){
	cin>>a>>b>>p;
	for(int i=a;i<=b;i++){
		f.push_back(i);
	}
	for(int i=a;i<=b;i++){
		for(int j=i+1;j<=b;j++){
			if(f[i]!=f[j]){
				if(gcd(i,j)>=p){
					merge(i,j);
				}
			}
		}
	}
	for(int i=a;i<=b;i++){
		ans.insert(f[i]);
	}
	cout<<ans.size()-1;
	return 0;
}



