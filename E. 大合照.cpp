#include<bits/stdc++.h>
using namespace std;
struct q{
	int x,id;
} a[50005];
int n,cnt,ans=INT_MAX;
map<int,int> f;
bool cmp(q z,q z1){
	return z.x<z1.x;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].x>>a[i].id;
    	if(!f[a[i].id]){
    		cnt++;
    		f[a[i].id]++;
		}
	}
    sort(a+1,a+n+1,cmp);
	int c=1;
	f.clear();
	f[a[1].id]=1;
	int r=1;
	for(int i=1;i<=n;i++){
		while(c<cnt && r<n){
			r++;
			f[a[r].id]++;
			if(f[a[r].id]==1) c++;
		}
		if(c==cnt) ans=min(ans,a[r].x-a[i].x);
		else break;
		f[a[i].id]--;
		if(f[a[i].id]==0) c--; 
	}	
	cout<<ans;																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	   													
	return 0;
}
