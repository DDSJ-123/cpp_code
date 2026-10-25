#include<bits/stdc++.h>
using namespace std;
long long sum;
int n;
long long z,sr;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%lld",&sr);
		if(sr<=z) z++;
		else z=sr;
		sum+=z;
	}
	cout<<sum;
	return 0;
}

