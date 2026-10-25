#include<bits/stdc++.h>
using namespace std;
int n;
unsigned int a[10000005]; 
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int t=1,t1=1;
	while(1){
		if(a[t1]>=t){
			t++;
			t1++;
		}else{
			while(a[t1]<t && t1!=n){
				t1++;
			}
		}
		if(t1==n){
			cout<<t;
			return 0;;
		} 
	}
	return 0;
}


