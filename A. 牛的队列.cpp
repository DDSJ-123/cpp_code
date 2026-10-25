#include<bits/stdc++.h>
using namespace std;
int a[10005];
int n,s;
long long sum;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>s;
    	a[s]++;
	}
	for(int i=1;i<=1000;i++){
		for(int j=1;j<=i-1;j++){
			sum+=(i-j)*(long long)a[i]*a[j];
		}
	}
	cout<<sum;
	return 0;
}

