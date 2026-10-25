#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
int main(){
	cin>>n;
	a[1][1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		} 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int q=a[i][j];
			if(q!=0){
				cout<<q;
			}
		}
		cout<<endl;
	}
	return 0;
}

