#include<bits/stdc++.h>
using namespace std;
int n,k;
int z[100005],f[100005],zs,fs;
int sum;
int sr;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>sr;
		if(sr>=0){
			zs++;
			z[zs]=sr;
		}else{
			fs++;
			f[fs]=sr;
		}
	} 
	sort(z+1,z+zs+1);
	sort(f+1,f+fs+1);
	/*
	for(int i=1;i<=zs;i++){
		cout<<z[i]<<" ";
	}
	cout<<"\n";
	for(int i=1;i<=fs;i++){
		cout<<f[i]<<" ";
	}
	*/
	int dp=0;
	int zs2=1;
	while(k--){
		int lz=abs(z[zs2]-dp);
		int lf=abs(f[fs]-dp);
		if(zs2<=zs && fs>=1){
			if(lz>=lf){
				dp=z[zs2];
				sum+=lz;
				zs2++;
			}else{
				dp=f[fs];
				sum+=lf;
				fs--;
			}
		}else if(fs>=1){
			dp=f[fs];
			sum+=lf;
			fs--;
		}else{
			dp=z[zs2];
			sum+=lz;
			zs2++;
		} 
	}
	cout<<sum;
	return 0;
}



