#include <iostream>
using namespace std;
const int N = 20;
int n;
char path[N][N];
int deep[N],pie[N],na[N];
void dfs(int u)
{
	if(u==n){
		for(int i=0;i<n;i++) puts(path[i]);
		puts("\n");
		return;
	}
	for(int i=0;i<n;i++){
		if(!deep[i] && !pie[u+i] && !na[i-u+n]){
			path[u][i]='Q';
			deep[i]=pie[u+i]=na[i-u+n]=true;
			dfs(u+1);
			deep[i]=pie[u+i]=na[i-u+n]=false;
			path[u][i]='.';
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			path[i][j]='.';
		}
	}
	dfs(0);
	return 0;
}