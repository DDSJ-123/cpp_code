#include<bits/stdc++.h>
using namespace std;
int x1,y1,x2,y2,n;
struct pp{
	int x,y,bh;
	double z;
}a[100005];
double ojld(int a,int b,int c,int d){
	return sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
}
bool cmp(pp a,pp b){
	if(a.z!=b.z) return a.z<b.z;
	return a.bh<b.bh;
}
int main(){
	freopen("safe.in","r",stdin);
	freopen("safe.out","w",stdout);
	scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a[i].x,&a[i].y);
		a[i].bh=i;
		a[i].z=min(min(ojld(a[i].x,a[i].y,x1,y1),ojld(a[i].x,a[i].y,x1,y2)),min(ojld(a[i].x,a[i].y,x2,y1),ojld(a[i].x,a[i].y,x2,y2)));
	}
	printf("%.3f\n",a[1].z);
	sort(a+1,a+n+1,cmp);
	printf("%d\n%.3f",a[1].bh,a[1].z);
	return 0;
}


