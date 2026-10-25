#include<bits/stdc++.h>
using namespace std;
struct jg{
	int x,y,len;
}a[1100000];
int f[110000];
int n,k;
bool cmp(jg n1,jg n2){
	return n1.len<n2.len;
}
int find(int x){
	if(f[x]==x) return x;
	else return f[x]=find(f[x]);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int t;
			cin>>t;
			if(i<j){
				k++;
				a[k].x=i;
				a[k].y=j;
				a[k].len=t;
			}
		}
	}	
	sort(a+1,a+k+1,cmp);
	for(int i=1;i<=n;i++) f[i]=i;
	int mi=0;
	int c=0;
	for(int i=1;i<=k;i++){
		int fx=find(a[i].x);
		int fy=find(a[i].y);
		if(fx!=fy){
			f[fy]=fx;
			c++;
			mi+=a[i].len;
		}
		if(c==n-1) break;
	}
	cout<<mi; 
	return 0;
}

