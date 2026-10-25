#include<bits/stdc++.h>
using namespace std;
int n,xx,yy,z,mi=10000,ma=99999; 
int a[100005];  
int pd(int s,int yz){
	int sum=0;
	while(s){
		if(s%10==yz) sum++;
		s/=10;
	}
	return sum;
}
int main(){
	freopen("rule.in","r",stdin);
	freopen("rule.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>z;
		if(z==1){
			cin>>xx;
			mi=max(mi,xx);
		}
		if(z==2){
			cin>>xx;
			ma=min(ma,xx);
		}
		if(z==3){
			cin>>xx;
			a[xx]++;
		}
		if(z==4){
			cin>>xx>>yy;
			for(int i=mi;i<=ma;i++){
				if(pd(i,yy)<xx) a[i]=123;
			}
		}
		if(z==5){
			cin>>xx>>yy;
			for(int i=mi;i<=ma;i++){
				if(pd(i,yy)>=xx) a[i]=123;
			}
		}
	}
	for(int i=mi;i<=ma;i++){
		if(a[i]!=123) cout<<i<<endl;
	}
	return 0;
}


