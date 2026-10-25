#include<bits/stdc++.h>
using namespace std;
struct zb{
	int x;
	int y;
};
bool cmp(zb x,zb y){
	if(x.x!=y.x) return x.x<y.x;
	else return x.y<y.y;
}
zb a[10005];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;  	
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].x<<" "<<a[i].y<<endl;
	} 
	return 0;
}

