#include <bits/stdc++.h>
using namespace std;
int k,ans=1;
string s;
int dfs(){
	while(k<s.size()){
		if(s[k]=='('){
			k+=2;				
		}else if(s[k]=='|'){
			k++;
			ans = max(ans,dfs());
		}else if(s[k]=='x'){
			ans++;
			k++;
		}else break;
	}
	return ans; //((xx|xxx)x|(x|xx))xx
}
int main(){
	cin>>s;
	cout<<dfs();
}