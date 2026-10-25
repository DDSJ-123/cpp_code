#include<bits/stdc++.h>
using namespace std;

int n;
int a[75]; 
bool f[75];
int len,slen;

bool dfs(int cnt,int sum,int idx){
	if(cnt*len==slen) return true;
	if(sum==len) return dfs(cnt+1,0,1);
	int f1=0;
	for(int i=idx;i<=n;i++){
		if(a[i]==f1 || f[i] || sum+a[i]>len) continue;
		f[i]=true;
		if(dfs(cnt,sum+a[i],i+1)) return true;
		f[i]=false;
		f1=a[i];
		if(sum==0 || sum+a[i]==len) return false;
	}
	return false; 
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		slen+=a[i];
	}
	sort(a+1,a+n+1);
	reverse(a+1,a+n+1);
	for(len=a[1];len<=slen;len++){
		if(slen%len==0 && dfs(0,0,1)==true){
			cout<<len;
			break;
		}
	}
	return 0;
}



