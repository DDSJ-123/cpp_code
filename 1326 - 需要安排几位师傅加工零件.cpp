#include<bits/stdc++.h>
using namespace std;
int m,n,a[105],ans,sum; 
int main(){
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	for(int i=n;i>0;i--){
		ans+=a[i];
		sum++;
		if(ans>=m){
			break;
		}
	}
	if(ans<m) cout<<"NO";
    else cout<<sum;
	return 0;
}


