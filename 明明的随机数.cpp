#include<bits/stdc++.h>
using namespace std;
int a[102],n,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]<a[i]){
				int l=a[j];
				a[j]=a[i];
				a[i]=l;
			}else if(a[j]==a[i]){
				a[j]=0;
			}
		}
    }
    for(int i=1;i<=n;i++){
    	if(a[i]!=0){
    		s++;
		}
	}
    cout<<s<<endl;
    for(int i=1;i<=n;i++){
        if(a[i]!=0){
        	cout<<a[i]<<" ";
		}	
	}

	return 0;
}

