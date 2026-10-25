#include<bits/stdc++.h>
using namespace std;
int a[51],s=INT_MIN,q[51];
int main(){
	for(int i=1;i<=50;i++){
		cin>>a[i];
	}
	for(int i=1;i<=50;i++){
		for(int j=i+1;j<=50;j++){
			if(a[i]==a[j]){
				q[i]++;
			}
		}
	}
	for(int i=1;i<=50;i++){
		if(q[i]>s){
			s=q[i];
		}
	}
	cout<<s;
	return 0;
}

