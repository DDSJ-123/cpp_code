#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005],b[100005];
int s[100005],len;
bool find(int z){
	int l=1,r=m;
	while(l<=r){
		int mid=(l+r)/2;
		if(b[mid]==z){
			return true;
		}else if(b[mid]>z){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return false;
} 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	sort(b+1,b+m+1);
	for(int i=1;i<=n;i++){
		if(find(a[i])){
			len++;
			s[len]=a[i];
		}
	}
	for(int i=1;i<=len;i++){
		cout<<s[i]<<" ";
	} 
	return 0;
}



