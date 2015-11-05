#include<limits>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<stack>
#include<bitset>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<ctime>
#define LL __int64
#define eps 1e-8
#define pi acos(-1)
#define delta 0.98 //模拟退火递增变量
#define INF 0x7fffffff
using namespace std;
class Solution {
public:
	int l;
	vector<string>ans;
	map<string,int>mp;
	int o=0;
	void DFS(int a,int b,int p,string g,string s){
		if (fabs(a)>l-p) return;
		if (p==l){
			if (a==0){
				if ((o==0 || g.length()==o)&&mp[g]==0){
					ans.push_back(g);
					mp[g]=1;
					o=g.length();
				}
			}
			return ;
		}
		if (s[p]!='(' && s[p]!=')')
			DFS(a,b,p+1,g+s[p],s);
		else
		if (s[p]==')'){
			if (a==0)	
				DFS(a,b+1,p+1,g,s);
			else{
				DFS(a-1,b+1,p+1,g+')',s);
				DFS(a,b+1,p+1,g,s);
			}
		}
		else{
			DFS(a+1,b-1,p+1,g+'(',s);
			DFS(a,b-1,p+1,g,s);
		}
		return ;
	}
    vector<string> removeInvalidParentheses(string s) {
        l=s.length();
        int k=0;
        for (int i=0;i<l;i++){
        	if (s[i]=='(') k++;
        	else if (s[i]==')') k--;
        }
        DFS(0,k,0,"",s);  //前面值为0，后面值为k，到了第0个位置 
        return ans;
    }
}gg;
int main(){
	string q="e)k()(())";
	vector<string>hh;
	hh=gg.removeInvalidParentheses(q);
	for (int i=0;i<hh.size();i++)
		cout<<hh[i]<<endl;
	return 0;
}

