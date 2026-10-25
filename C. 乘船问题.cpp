#include<bits/stdc++.h>
using namespace std;
int n,c,ans,a[1000005];     
bool cmp(int x,int y){
	return x>y;
}                                 
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,cmp);
    cin>>c;
    int t=1,t1=n;
    while(t>t1){
    	ans++;
    	if(a[t]+a[t1]<=c){
    		t++,t1--;
		}else{
			t++;
		}
	}
	cout<<ans;
	return 0;
}
