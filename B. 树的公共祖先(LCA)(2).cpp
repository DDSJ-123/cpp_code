#include<bits/stdc++.h>
using namespace std;
const int N=105;

struct pp{
	int x,y;
	bool bj;
}a[N]; 

int n;
int sra,srb;
int srx,sry;

int father[N];

int floor_a,floor_b;
int father_a,father_b;

int js(int z){
	int t=z;
	int c=1;
	while(father[t]!=0){
		t=father[t];
		c++;
	}
	return c;
}

void find(int z){
	for(int i=1;i<n;i++){
		if(!a[i].bj){
			if(a[i].x==z){
				father[a[i].y]=a[i].x;
				a[i].bj=true;
				find(a[i].y);
			}else if(a[i].y==z){
				father[a[i].x]=a[i].y;
				a[i].bj=true;
				find(a[i].x);
			}
		}
	}
}

int main(){
	cin>>n;
	cin>>sra>>srb;
	for(int i=1;i<n;i++){
		cin>>a[i].x>>a[i].y;
		a[i].bj=false;
	}
	
	find(1);
	
	floor_a=js(sra);
	floor_b=js(srb);
	father_a=sra;
	father_b=srb;
	
	if(floor_a>floor_b){
		while(floor_a!=floor_b){
			father_a=father[father_a];
			floor_a--;
		}
	}else if(floor_a<floor_b){
		while(floor_b!=floor_a){
			father_b=father[father_b];
			floor_b--;
		}		
	}
	
	while(father_a!=father_b){
		father_a=father[father_a];
		father_b=father[father_b];
	}
	
	cout<<father_a;
	return 0;
}



