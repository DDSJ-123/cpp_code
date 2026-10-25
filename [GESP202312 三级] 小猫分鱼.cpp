#include<bits/stdc++.h>
using namespace std;
int q=0;
bool bj=true;
int main(){
	int n,i;
	cin>>n>>i;
	while(1){
		q++;
		int ans=q;
		bj=true;
		for(int j=1;j<=n;j++){
			if(ans*1.0*n/(n-1)+i!=int(ans*1.0*n/(n-1)+i)){
				bj=true;
				break;
			}else{
				bj=false;
				ans=ans*n/(n-1)+i;
			}
		}
		if(bj==false){
			cout<<ans;
			return 0;
		}
	}
	return 0;
}

