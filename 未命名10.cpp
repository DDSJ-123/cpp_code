#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n,s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
		    if(a[j]<a[i]){
				swap(a[i],a[j]);
			}
		}
    }
    for(int i=1;i<=n;i++){
    	for(int j=i+1;j<=n;j++){
    		if(a[i]==a[j]){
    			a[i]=0;
    			s++;
    			break;
			}
		}
	} 
	cout<<s<<endl;
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
			cout<<a[i]<<endl;
	    }
	}
	return 0;
}

