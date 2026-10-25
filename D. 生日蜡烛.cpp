#include<bits/stdc++.h>
using namespace std;
int a[205];
int main(){
	for(int i=1;i<=200;i++){
		a[i]=i+a[i-1];
	}
	for(int i=1;i<=200;i++){
		for(int j=i+1;j<=200;j++){
			if(a[j]-a[i-1]==236){
				cout<<i<<"\n";
				return 0;
			} 
		}
	}
	return 0;
}



