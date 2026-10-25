#include<bits/stdc++.h>
using namespace std;
long long sum;
bool bd(int i){
	int g1s=0;
	while(i>0){
		if(i%2==1) g1s++;
		i/=2;
	}
	if(g1s%2==1) return true;
	else return false;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(bd(i)) sum+=i;
	}	
	printf("%lld",sum);
	return 0;
}


