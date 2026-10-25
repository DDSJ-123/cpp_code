#include<bits/stdc++.h>
using namespace std;
int n,a[10005],p[10005],e=INT_MIN;
double z,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	s/=n;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]>a[i]){
				int l=a[j];
				a[j]=a[i];
				a[i]=l;
			}
		}
    }
    if(n%2==0){
    	z=(a[n/2]+a[n/2+1])*1.0/2;
	}else{
		z=a[n/2+1];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i]==a[j]){
				p[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(p[i]>e){
			e=p[i];
		}
	}
	printf("%.2f",s);
	cout<<" "<<e<<" ";
	printf("%.1f",z); 
	return 0;
}

