#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],b[100005];

bool pd; 

int main(){
	
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		if(a[i]!=a[i]) pd=true;
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	
	cout<<n;
	
	return 0;
}



