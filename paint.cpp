#include<bits/stdc++.h>
using namespace std;

const int N = 105;

int l,r;
int ans;
int a[N];

int main(){
	
	freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);
	
	for(int i=1;i<=3;i++){
		cin>>l>>r;
		for(int j=l;j<=r;j++){
			a[j]++;
			if(a[j]==3) ans++;
		}
	}
	cout<<max(ans-1,0);
	return 0;
}

