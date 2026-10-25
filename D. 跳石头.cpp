#include<bits/stdc++.h>
using namespace std;

int l,r,n,m;
int d[50005],a[50005];

bool check(int z){
    int ans=0;
    for(int i=1;i<=n;i++){
        int x=a[i];
        if(x<z){
        	do{
        		i++; 
        		ans++;
        		z+=a[i];
			}while(i<=n || x<z);
		}
		if(ans>m){
			return false;
		} 
    }
    return true;
}

int main(){
    cin>>r>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>d[i];
        a[i]=d[i]-d[i-1];
    }
    n++;
    a[n]=l-d[n-1];
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)) l=mid;
        else r=mid-1;
    }
    cout<<l;
    return 0;
}
