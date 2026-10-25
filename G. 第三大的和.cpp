#include<bits/stdc++.h>
using namespace std;
int a[6];
int b[12];
int sum=0,js; 
int bj[600]; 
int main(){
	for(int i=1;i<=5;i++){
		cin>>a[i];
	}
	for(int i=1;i<=5;i++){
		for(int j=i+1;j<=5;j++){
			for(int k=j+1;k<=5;k++){
				js=a[i]+a[j]+a[k];
				if(!bj[js+300]){
					sum++;
					b[sum]=js;
					bj[js+300]=true;					
				}
			}
		}
	}
	sort(b+1,b+sum+1);
	cout<<b[sum-2];
	return 0;
}



