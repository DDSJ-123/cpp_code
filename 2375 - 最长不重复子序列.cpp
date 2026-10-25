#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005]; 
map<int,bool> m; 
int ma;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=1,r=0,ans=0;
	while(r<n && l<=n){
		ma=max(ans,ma);
		if(m.find(a[r+1])!=m.end()){
			ans--;
			m.erase(a[l]);
			l++;
		}else{
			ans++;
			m[a[r+1]]=true;
			r++;
		}
	}
	ma=max(ma,ans);
	cout<<ma;
	return 0;
}



