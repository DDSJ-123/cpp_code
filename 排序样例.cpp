#include<bits/stdc++.h>
using namespace std;
int a[100],n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	//选择排序(从小到大):用当前的数跟后面所有的比较，满足条件则交换(不稳定)
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
	
	//冒泡排序(从小到大):相邻两个位置比较，满足条件则交换 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j+1]<a[j]) swap(a[j+1],a[j]); 
		}
	} 
	
	//冒泡排序(从小到大优化版):相邻两个位置比较，满足条件则交换
	for(int i=1;i<=n;i++){
		bool bj=false; 
		for(int j=1;j<=n-i;j++){
			if(a[j+1]<a[j]){
				bj=true;
				swap(a[j+1],a[j]);
			} 
		}
		if(!bj) break;
	}
	
	//插入排序(从小到大for循环版):前i-1个数是有序的，将第i个数插入 
	for(int i=2;i<=n;i++){
		int p=a[i];
		for(int j=i-1;j>=1;j--){
			if(a[j]>p){
				swap(a[j],a[j+1]);
			} 
		}
	} 
	
	//输出
	for(int i=1;i<=n;i++) cout<<a[i]<<" "; 
	return 0;
}


