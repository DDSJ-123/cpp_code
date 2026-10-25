#include<bits/stdc++.h>
using namespace std;
int n,sum;
void hnt(int l,char q,char f,char m){
	sum++;
	if(l==1){
		//printf("%c To %c\n",q,m);
	}else{
		hnt(l-1,q,m,f);
		//printf("%c To %c\n",q,m);
		hnt(l-1,f,q,m);
	}
}
int main(){
	cin>>n;
	hnt(n,'A','B','C');
	cout<<sum;
	return 0;
}



