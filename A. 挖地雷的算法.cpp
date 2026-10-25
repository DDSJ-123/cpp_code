#include<bits/stdc++.h>
using namespace std;
int n,maw=0,w=0;
int a[500];
bool b[500][500];
int bj[500];
int lz[500]; 
string s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int srx,sry;
	while(1){
		cin>>srx>>sry;
		if(srx==0 && sry==0) break;
		b[srx][sry]=true;
	}
	for(int i=1;i<=n;i++){
		lz[i]=a[i];
		int ma=0,x=0;
		for(int j=1;j<i;j++){
			if(b[j][i] && lz[j]>=ma){
				ma=lz[j];
				x=j;
			}
		}
		lz[i]+=ma;
		bj[i]=x;
	} 
	for(int i=1;i<=n;i++){
		if(lz[i]>=maw){
			maw=lz[i];
			w=i;
		}		
	}
	s+=(w+'0');
	while(1){
		w=bj[w];
		if(w==0){
			break;
		}else{
			s+='-';
			s+=(w+'0');
		}		
	}
	reverse(s.begin(),s.end()); 
	cout<<s<<"\n"<<maw;
	return 0;
}



