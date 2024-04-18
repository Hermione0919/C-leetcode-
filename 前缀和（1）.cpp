/********************************
5 3
2 1 3 6 4
1 2
1 3
2 4
输出样例：
3
6
10
********************************/
#include <iostream>
#define qian_sum(Q,M)(Q?sum[M]-sum[Q-1]:sum[M])
using namespace std;
const int N=100;
int main(){
	int a,b,x,n;
	int arr[N],sum[N];
	cin>>x>>n;
	for(int i=1;i<=x;i++){
		cin>>arr[i];
		sum[i]=sum[i-1]+arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>a>>b;
		cout<<qian_sum(a,b);
	}
}
