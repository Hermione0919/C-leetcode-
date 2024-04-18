#include <bits/stdc++.h>
using namespace std;
int d[5] = {0};
void add(int l,int r,int v){
	d[i]+=v;
	if(r<5)d[r+1]-=v;
}
int main(){
	int arr[5]={1,3,7,5,2};
	add(2,4,5);
	add(1,3,2);
	add(0,2,-3);
	for(int i=1;i<5;i++)d[i]+=d[i-1];
	for(int i=0;i<5;i++){
		arr[i]+=d[i];
		cout<<arr[i]<<" ";
	}
	memset(d,0,sizeof(0));
	return 0;
}