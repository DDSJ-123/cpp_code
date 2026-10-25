#include<bits/stdc++.h>
using namespace std;

struct sz{
	string key_name,key;
}key_sz[55];

bool key_cmp(sz key_a,sz key_b){
	return key_a.key_name<key_b.key_name;
}

struct node{
	string date,time,user,action,params;
	
	void init(){
		date.erase(0,5);
		time.erase(0,5);
		user.erase(0,5);
		action.erase(0,7);
		params.erase(0,7);
	} 
	
	void _date(){
		string cs="";
		int a=date.size();
		for(int i=5;i<a;i++){
			if(date[i]=='-'){
				if(cs.size()!=2){
					date.insert(i-1,"0");
					a=date.size();
					i++;
				}
				cs="";
				continue;
			}
			cs+=date[i];
		}
		if(cs.size()!=2){
			date.insert(date.size()-1,"0");
		}
		return ;
	}
	
	void _time(){
		string cs="";
		int a=time.size();
		for(int i=0;i<a;i++){
			if(time[i]==':'){
				if(cs.size()!=2){
					time.insert(i-1,"0");
					a=time.size();
					i++;
				}
				cs="";
				continue;
			}
			cs+=date[i];
		}
		if(cs.size()!=2){
			time.insert(time.size()-1,"0");
		}
		return ;
	}
	
	void _user(){
		for(int i=0;i<user.size();i++){
			if(user[i]>='A' && user[i]<='Z'){
				user[i]=char('a'+(user[i]-'A'));
			}
		}
		return ;
	}
	
	void _params(){
		if(params==""){
			return ;
		}
		int ans=0;
		int bj=0;
		string ls="";
		for(int i=0;i<params.size();i++){
			if(params[i]=='&'){
				ans++;
				bj=0;
			}else if(params[i]=='='){
				bj++;
			}else{
				if(bj==0){
					key_sz[ans].key_name+=params[i];
				}else{
					key_sz[ans].key+=params[i];
				}
			}
		}
		sort(key_sz,key_sz+ans+1,key_cmp);
		for(int i=0;i<=ans;i++){
			ls+=key_sz[i].key_name+"="+key_sz[i].key+(i<ans?"&":"");
			key_sz[i].key_name="";
			key_sz[i].key="";
		}
		params=ls;
		return ;
	}
	
	void cs(){
		init();
		_date();
		_time();
		_user();
		_params();
		return ;
	}
}a[10005];

bool cmp(node node_a,node node_b){
	if(node_a.date+node_a.time!=node_b.date+node_b.time) return node_a.date+node_a.time<node_b.date+node_b.time;
	if(node_a.user!=node_b.user) return node_a.user<node_b.user;
	if(node_a.action!=node_b.action) return node_a.action<node_b.action;
	if(node_a.params!=node_b.params) return node_a.params<node_b.params;
}

int n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].date>>a[i].time>>a[i].user>>a[i].action>>a[i].params;
		a[i].cs();
	}
	sort(a+1,a+n+1,cmp);
	int qdl=0,nl=n;
	while(nl){
		qdl++;
		nl/=10;
	}
	for(int i=1;i<=n;i++){
		int j=i,ws=0;
		while(j){
			ws++;
			j/=10;
		}
		for(;ws<qdl;ws++) cout<<0;
		cout<<i<<". "<<a[i].date<<" "<<a[i].time<<" "<<a[i].user<<" "<<a[i].action<<" "<<a[i].params<<"\n";
	}
	return 0;
}



