#include <bits/stdc++.h>
using namespace std;
int  n, k1, k2, num, flag, a[25], b[25], vis[25][25], ans[600];
int p[4]={0,0,-1,1},q[4]={-1,1,0,0};

void dfs(int x,int y,int k){
    
    if( x < 1 || x > n || y < 1 || y > n ) return;
    
    if( a[x] < 0|| b[y] < 0 || flag ==1) return;
    
    ans[k] = (x-1)*n + (y-1);
    
    if( x == n && y == n && k1 == 1 && k2 == 1){
        num = k;
        flag = 1;
        return;
    }
    
    for( int i=0;i<4;i++){
        int xx = x + p[i];
        int yy = y + q[i];
        if(vis[xx][yy]==1) continue;
        a[xx]--;
        b[yy]--;
        k1--;
        k2--;
        vis[xx][yy]=1;
        dfs(xx,yy,k+1);
        a[xx]++;
        b[yy]++;
        k1++;
        k2++;
        vis[xx][yy]=0;
    }  
}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        k1+=a[i];
    }
    for(int j=1; j<=n; j++){
        cin>>b[j];
        k2+=b[j];
    }
    flag = 0;
    vis[1][1]=1;
    dfs(1,1,1);
    
	for( int i=1; i<=num; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}