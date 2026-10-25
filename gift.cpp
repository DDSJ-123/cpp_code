#include<bits/stdc++.h>
using namespace std;
int n,len,sum,mi=INT_MAX;
string s,s1;
struct pp{
	int z;
	bool bd;
}a[256];
int a1[256];
int main(){
	freopen("gift.in","r",stdin);
	freopen("gift.out","w",stdout);
	cin>>len>>s>>n>>s1;
	for(int i=0;i<s1.size();i++){
		a1[int(s1[i])]++;	
	}
	for(int i=0;i<=255;i++){
		a[i].z=false;
	}
	/*
	for(int i=0;i<=255;i++){
		if(a1[i]!=0){
			cout<<char(i)<<" "<<a1[i]<<"\n"; 
		}
	}
	*/
	int l=-1,r=-1;
	while(l>=r && l<len){
		if(sum>=n){
			mi=min(mi,l-r);
		}
		if(sum<n){
			l++;
			int o=int(s[l]);
			if(a1[o]!=0){
				a[o].z++;
				if(a[o].bd==false && a[o].z>=a1[o]) a[o].bd=true,sum++;
			} 
		}else{
			r++;
			int o=int(s[r]);
			if(a1[o]!=0){
				if(a[o].bd==false){
					if(a[o].z>0) a[o].z--;
				}else{
					if(a[o].z-1<a1[o]) a[o].z--,a[o].bd=false,sum--;
					else a[o].z--;
				}
			}
		}
	}
	/*
	for(int i=0;i<=255;i++){
		cout<<char(i)<<" "<<a[i].z<<" "<<a[i].bd<<"\n";
	}
	*/
	printf("%d",mi);
	return 0;
}


