#include <iostream>
using namespace std;
int main()
{
	const int M=20,N=20,K=20;
	int a[2][3]={2,3,4,4,2,6};
	int b[3][2]={5,2,8,9,1,5};
	int c[M][K];
	int M1,N1,N2,M2,i,j,k;
//	cin>>M1>>N1;
//	for(i=0;i<M1;i++){
//		for(j=0;j<N1;j++){
//			cin>>a[i][j];
//		}
//	}
//	cin>>N2>>M2;
//	while(N2!=N1){
//		cout<<"a矩阵的列与b矩阵的行不匹配"<<endl;
//		cin>>N2>>M2;
//	}
	
	/*for(i=0;i<N2;i++){
		for(j=0;j<M2;j++){
			cin>>b[i][j]; 
		}
	}*/
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(int m=0;m<3;m++){
				c[i][j]=c[i][j]+a[i][m]*b[m][j];
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}