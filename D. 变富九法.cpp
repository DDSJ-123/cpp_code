#include<bits/stdc++.h>
using namespace std;
int n,a[20],mi=INT_MAX;
int main(){
    cin>>n;
    for(int i=1;i<=9;i++){
    	cin>>a[i];
    	mi=min(mi,a[i]);
	}
	int l=n/mi;
	for(int i=1;i<=l;i++){
		for(int j=0;j>=1;j--){
			if(n-a[i]>=0 && (n-a[j])/mi ==l-i){
				n=n-a[i];
				cout<<j;
				break;
			}
		}
	}
	return 0;
}

