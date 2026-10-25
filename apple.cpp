#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005];
map<int,int> m;
int main(){
	freopen("apple.in","r",stdin);
	freopen("apple.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		m[a[i]]++;
	}
	auto it=m.begin();
	it++;
	for(int i=1;i<=n;i++){
		if(a[i]==it->first){
			printf("%d ",i);
			break;
		}
	}
	printf("%d",it->first);
	return 0;
}

