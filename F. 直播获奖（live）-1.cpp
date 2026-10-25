#include<bits/stdc++.h>
using namespace std;

int n;
int w;

int new_p;

int a[605];
int s[100005];
int ma=600;

int main(){
	cin>>n>>w;
	for(int i=1,sr;i<=n;i++){
		cin>>sr;
		a[sr]++;
		new_p=max(1,i*w/100);
		int lll=0;
		for(int j=ma;j>0;j--){
			lll+=a[j];
			if(lll>=new_p){
				s[i]=j;
				break;
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
	
	return 0;
}



