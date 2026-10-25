#include<bits/stdc++.h>
using namespace std;

const int N = 100005;

int a[N];
int b[N]; 
int t,n;
bool bj;

int main(){
	
	freopen("step.in","r",stdin);
	freopen("step.out","w",stdout);
	
	cin>>t;
	while(t--){
		cin>>n;
		bj=false;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i!=1) b[i-1]=abs(a[i]-a[i-1]);
		}
		sort(b+1,b+n);
		
		for(int i=1;i<n;i++){
			if(b[i]!=i){
				bj=true;
				break;
			}
		}
		if(!bj){
			cout<<"Y\n"; 
		}else{
			cout<<"N\n";
		}
	}
	return 0;
}



