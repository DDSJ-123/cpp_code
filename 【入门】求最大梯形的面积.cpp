#include<bits/stdc++.h>
using namespace std;
int n;
double s=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		double s1,s2,s3,q=0;
		cin>>s1>>s2>>s3;
		q=(s1+s2)*s3/2;
		if(q>s){
			s=q;
		}
    }
    printf("%.1f",s);
	return 0;
}

