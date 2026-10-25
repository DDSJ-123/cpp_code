#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	freopen("triple.in","r",stdin);
	freopen("triple.out","w",stdout);
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && b<c){
		printf("Sheng");
	}else if(a>b && b>c){
		printf("Jiang");
	}else if(a<b && b>c){
		printf("Jian");
	}else{
		printf("nonono");
	}
	return 0;
}


