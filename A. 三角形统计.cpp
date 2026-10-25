#include<bits/stdc++.h>
using namespace std;

int n;
int a[2005];
int b[1005]; 
int ans=0;
int sr,k;
int q[4];
bool bj[2005];

void pd(){
	if(q[1]+q[2]>q[3] && q[1]+q[3]>q[2] && q[2]+q[3]>q[1]){
		ans++;
	}
	return ;
}

void js(int c,int l){
	if(c==0){
		pd();
		return ;
	}else{
		for(int i=l+1;i<=k;i++){
			if(!bj[i]){
				bj[i]=true;
				q[c]=a[i];
				js(c-1,i);
				bj[i]=false;
			}
		}
	}
}

int main(){
	cin>>n;
	if(n<3){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>sr;
		if(b[sr]==0){
			k++;
			a[k]=sr;
		}
		b[sr]++;
	}
	sort(a+1,a+k+1);
	js(3,0);
	cout<<ans;
	return 0;
}



