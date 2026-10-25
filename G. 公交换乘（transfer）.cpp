#include<bits/stdc++.h>
using namespace std;

int n;

struct pp{
	int modle;
	int price;
	int time;
};

pp a[100005]; 
int s_price[100005];
int s_time[100005];
bool bj[100005];
int s_begin=1,s_end;

int price_sum;

bool pd(int price,int time){
	int li=s_begin;
	while(time-s_time[li]>45 && li<=s_end){
		bj[li]=false;
		li++;
	}
	s_begin=li;
	for(int i=s_begin;i<=s_end;i++){
		if(!bj[i] && s_price[i]>=price){
			bj[i]=true;
			return true;
		}
	}
	return false;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].modle>>a[i].price>>a[i].time;
		if(a[i].modle==0){
			price_sum+=a[i].price;
			s_end++;
			s_price[s_end]=a[i].price;
			s_time[s_end]=a[i].time;
		}else{
			if(!pd(a[i].price,a[i].time)){
				price_sum+=a[i].price;
			}
		}
	}
	cout<<price_sum;
	return 0;
}



