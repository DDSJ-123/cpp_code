#include<bits/stdc++.h>
using namespace std;
int a[15];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int f=i+1;f<=n;f++){
			if(a[i]>a[f]){
				swap(a[i],a[f]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

