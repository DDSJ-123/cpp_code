#include<bits/stdc++.h>
using namespace std;
int main(){
	int f;
	cin>>f;
	if(f>=86){
		cout<<"VERY GOOD";
	}
	if(f>=60 && f<=85){
		cout<<"GOOD";
	}
	if(f<60){
		cout<<"BAD";
	}
	return 0;
}
