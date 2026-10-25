#include<bits/stdc++.h>
using namespace std;
int a,n,a1;
int bj[1000002];
int sr;
int j=1;
int find(int z){
	int l=a1,r=j;
	while(l<=r){
		int mid=(l+r)/2;
		if(bj[mid]==z){
			return mid;
		}else if(bj[mid]>z){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	//cout<<l<<" "<<r<<"\n";
	return r;
}
int main(){
	cin>>a>>n;
    a1=int(sqrt(a));	
	for(int i=1;i<=n;i++){
		cin>>sr;
		for(;j*j<=sr;j++) bj[j]=j*j;
		if((find(sr)*find(sr)==sr || sr%a==0) && sr>=a){
			cout<<"lucky\n";
		}else{
			int pf,ps;
			if(sr<a){
				pf=a1*a1;
				ps=a;
			}else{
				pf=(find(sr)+1)*(find(sr)+1);
				ps=sr+sr%a;
			}
			cout<<min(pf,ps)<<"\n";
		}
	}
	return 0;
}



