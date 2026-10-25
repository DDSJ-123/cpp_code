#include<bits/stdc++.h>
using namespace std;
struct a{
	long long t,t1;
	long long c(){
		return t-t1;
	} 
}; 
long long ma,mi,n,m,sum;
a a1[100005];
bool cmp(a s,a s1){
    return s.c()>s1.c();
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a1[i].t>>a1[i].t1;
    	ma+=a1[i].t;
    	mi+=a1[i].t1;
	}
	if(m<mi){
		cout<<-1;
		return 0;
	}
	if(m>ma){
		cout<<0;
		return 0;
	}
	sort(a1+1,a1+n+1,cmp);
	for(int i=1;i<=n;i++){
		ma-=a1[i].c();
		sum++;
		if(m>ma){
			break;
		}		
	}
	cout<<sum<<" "<<ma;
	return 0;
}

