#include<bits/stdc++.h>
using namespace std;

int n,a[25];
int sum;
bool bj[25]; 
bool bj2; 

void js(int z,int a1,int a2,int a3){
	if(a1>sum/3 || a2>sum/3 || a3>sum/3){
		return ;
	}
	if(a1==a2 && a2==a3 && a1==sum/3){
		bj2=true;
		return ;
	}
	for(int i=z;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			js(i,a1+a[i],a2,a3);
			js(i,a1,a2+a[i],a3);
			js(i,a1,a2,a3+a[i]);
			bj[i]=false;
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a+1,a+n+1);
	if(sum%3!=0 || a[n]>sum/3){
		cout<<"no";
		return 0;
	}
	js(1,0,0,0);
	if(!bj2) cout<<"no";
	else cout<<"yes";
	return 0;
}



