#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int z1,z2,wz1,wz2,s1,s2;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	z1=a[1];
	wz1=1;
	s1=1;
	for(int i=2;i<=n;i++){
		if(a[i]!=z1){
			z2=a[i];
			wz2=i;
			s2++;
		}else{
			s1++;
			wz1=i;
		}
	}
	if(s1==1) cout<<wz1<<" "<<z1;
	else cout<<wz2<<" "<<z2;
	return 0;
}


