#include<bits/stdc++.h>
using namespace std;
int a[610];
int n,s,w;
int main(){
    scanf("%d%d",&n,&w);
    for(int i=1;i<=n;i++){
    	scanf("%d",&s);
    	a[s]++;
    	int k=max(1,i*w/100);
    	int ans=0;
		for(int j=600;j>=0;j--){
			if(ans+a[j]<k) ans+=a[j];
		  	else{
		  	    printf("%d ",j);
				break;	
			}
		} 
	}
	return 0;
}

