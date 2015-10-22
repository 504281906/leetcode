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
	vector<string>ans;
	void go(int k,int n,string s){
		if (s.length()==n){
			cout<<s<<endl;
			ans.push_back(s);
			return;
		}
		for (int i=0;i<2;i++){
			if (i==0){
				if (k>=n/2) continue;
				else go(k+1,n,s+"(");
			}else{
				if (n-k<=0 || k<=s.length()-k) continue;
				else go(k,n,s+")");
			}
		}
		return;
	}
    vector<string> generateParenthesis(int n){
		go(0,2*n,"");
		return ans;
    }
}gg;
int main(){
	gg.generateParenthesis(1);
	return 0;
}
