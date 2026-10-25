#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[]={-1,-1,1,7,4,2,6,8,10,18,22,20,28,68,88,108,188,200,208,288,688,888};
void sc(int s,int s1){
	if(s!=0) cout<<s;
	for(int i=1;i<=s1;i++) cout<<8;
	cout<<endl;
}
int main(){
    cin>>t;
    while(t--){
    	cin>>n;
    	if(n<=21){
    		cout<<a[n]<<endl;
    		continue;
		}
    	if(n%7==1) sc(10,(n-8)/7);
    	else if(n%7==2) sc(1,(n-2)/7);
    	else if(n%7==3) sc(200,(n-17)/7);
    	else if(n%7==4) sc(20,(n-11)/7);
    	else if(n%7==5) sc(2,(n-5)/7);
    	else if(n%7==6) sc(6,(n-6)/7);
    	else if(n%7==0) sc(0,n/7);
	}
	return 0;
}

