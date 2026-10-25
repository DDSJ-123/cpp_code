#include<bits/stdc++.h>
using namespace std;
const int N = 8051;
struct node{
	int num,pos;
}a[N];
int b[N];
int n,q;
bool cmp(node n1,node n2){
	if(n1.num!=n2.num) return n1.num<n2.num;
	return n1.pos<n2.pos;
}
int get(int z){
	int l=1,r=n,mid;
	int v=b[z];
	while(l<=r){
		mid=(l+r)/2;
		if(v==a[mid].num && z==a[mid].pos){
			return mid;
		}else if(v==a[mid].num && z<a[mid].pos) r=mid-1;
		else if(v==a[mid].num && z>a[mid].pos) l=mid+1;
		else if(v<a[mid].num) r=mid-1;
		else r=mid+1;
	}
}
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].num);
		a[i].pos=i;
		b[i]=a[i].num;
	}
	sort(a+1,a+n+1,cmp);
	int z,x,y;
	while(q--){
		scanf("%d%d",&z,&y);
		if(z==2){
			printf("%d\n",get(x));
		}else{
			scanf("%d",&y);
			int p=get(x);
			a[p].num=y;
			b[x]=y;
			if(p!=n && a[p].num>=a[p+1].num){
				for(int i=p;i<=n;i++){
					if(a[i].num>a[i+1].num || a[i].num==a[i+1].num && a[i].pos>a[i+1].pos){
						swap(a[i],a[i+1]);
					}else{
						break;
					}
				}
			}else if(p!=1 && a[p].num<a[p-1].num){
				for(int i=p;i>=2;i--){
					if(a[i].num<a[i-1].num || a[i].num==a[i-1].num && a[i].pos<a[i-1].pos){
						swap(a[i],a[i-1]);
					}else{
						break;
					}
				}
			}
		}
	}
	return 0;
}
