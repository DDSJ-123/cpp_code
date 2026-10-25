#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
struct pp{
	int x,y,z;
}b[10005]; 
int c[105][105];
int ans;
bool cmp(pp lp,pp pl){
	return lp.z<pl.z;
}
int find(int x){
	return a[x]==x?x:a[x]=find(a[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) a[fx]=fy;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i-1;j++){
			ans++;
			b[ans].x=i;
			b[ans].y=j;
			b[ans].z=c[i][j];
		}
	}
	sort(b+1,b+ans+1,cmp);
	int sum=0;
	int answ=n-1;
	for(int i=1;i<=ans;i++){
		if(find(b[i].x)!=find(b[i].y)){
			sum+=b[i].z;
			answ--;
			merge(b[i].x,b[i].y);
		}
		if(answ==0){
			break;
		}
	}
	cout<<sum;
	return 0;
}



