#include <iostream>
#define qian_sum(A,B)(A?sum[B]-sum[A-1]:sum[B]) 
using namespace std;
const int N=100;
int main()
{
	int a,b;
	int sum[N],arr[N];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	sum[0]=arr[0];
	for(int i=1;i<5;i++){
		sum[i]=sum[i-1]+arr[i];
	}
	cout<<qian_sum(2,4)<<endl;
	cout<<qian_sum(0,3)<<endl;
	cout<<qian_sum(3,4)<<endl;
}