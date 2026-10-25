#include<bits/stdc++.h>
using namespace std;
int a[3];
int main(){
	for(int i=0;i<3;i++){
		cin>>a[i];
		if(a[i]%400==0){
			cout<<"Leap_year_2\n";
		}else if(a[i]%4==0 && a[i]%100!=0){
			cout<<"Leap_year_1\n";
		}else{
			cout<<"Nonleap_year\n";
		}
	}
	return 0;
}



