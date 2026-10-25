#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n,ans;
struct node{
	int v,t;
}a[N];
priority_queue<int,vector<int>,greater<int>> q; 
bool cmp(node n1,node n2){
	return n1.t<n2.t;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d%d",&a[i].v,&a[i].t);
	sort(a+1,a+n+1,cmp);
	int sumt=0;
	for(int i=1;i<=n;i++){
		if(sumt+1<=a[i].t){
			q.push(a[i].v);
			ans+=a[i].v;
			sumt++;
		}else{
			int tp=q.top();
			if(tp<a[i].v){
				q.pop();
				q.push(a[i].v);
				ans+=a[i].v-tp;
			}
		}
	}
	printf("%d",ans);
	return 0;
}


