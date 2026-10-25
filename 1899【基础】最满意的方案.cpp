#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005],b[100005];
int sum;
int main(){
	a[0]=INT_MAX;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=m;i++) cin>>b[i];
    sort(b+1,b+m+1);
    for(int i=1;i<=m;i++){
    	int sr=b[i];
    	int l=1,r=n,s=l+(r-l)/2;
		while(l<=r){
			if(a[s]>=sr){
				r=s-1;
			}else{
				l=s+1;
			}
			s=l+(r-l)/2;
		}
		sum+=min(abs(b[i]-a[l]),abs(b[i]-a[l-1]));
	}
	cout<<sum;
    return 0;
}
