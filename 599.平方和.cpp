#include <iostream>
using namespace std;
unsigned long long sum;
int check(int x){
	while(x){
		if(x%10==1||x%10==2||x%10==9||x%10==0)return 1;
		x/=10;	
	};
	return 0;
}
int main()
{
	for(int i=1;i<=2019;i++){
		if(check(i))sum+=i*i;
	}
	cout<<sum;
    return 0;
}