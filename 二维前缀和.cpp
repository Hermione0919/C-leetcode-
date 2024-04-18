#include <bits/stdc++.h>
using namespace std;
const int m=3,n=4;
int g[m][n]={{1,5,6,8},
			 {9,6,7,3},
			 {5,3,2,4}};
int sum[m][n];
void set_sum(){
	sum[0][0]=g[0][0];
	for( int i=1; i<n; i++)sum[0][i]=sum[0][i-1]+g[0][i];
	for( int j=1; j<m; j++)sum[j][0]=sum[j-1][0]+g[j][0];
	for( int i=1; i<n; i++)for( int j=1; j<m; j++)
		sum[j][i]=g[j][i]+sum[j-1][i]+sum[j][i-1]-sum[j-1][i-1];
}
int get_sum(int x1,int y1,int x2,int y2){
	if(!x1&&!y1)return sum[x2][y2];
	if(!x1)return sum[x2][y2]-sum[x2][y1-1];
	if(!y1)return sum[x2][y2]-sum[x1-1][y2];
	return sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
}
int main(){
	set_sum();
	cout<<get_sum(1,1,2,2)<<" "<<get_sum(0,1,1,3);
	return 0;
}