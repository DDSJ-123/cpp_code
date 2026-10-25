//枚举
/* 
#include<bits/stdc++.h>
using namespace std;
int n,a[10000005],ma=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int ans=0;
		for(int j=i;j<=n;j++){
			ans+=a[j];
			ma=max(ma,ans); 
		}
	}
	cout<<ma;
	return 0;
}
*/

//动态规划 
#include<bits/stdc++.h>
using namespace std;
int n,a[100005],p[100005];
int ma;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		p[i]=max(a[i],p[i-1]+a[i]);
		ma=max(ma,p[i]);
	}
	cout<<ma;
	return 0;
}
