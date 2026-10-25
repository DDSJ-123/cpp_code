#include<bits/stdc++.h>
using namespace std;
const int N=1E5+10;
int a[N],n,ans=0; 
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	ans=n;
	for(int i=1,j=1;i<=n;i++){
		if(a[i]>a[j]){
			j++;
			ans--;
		}
	}
	printf("%d",ans);
	return 0;
}

