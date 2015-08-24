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
    vector<vector<int> > generate(int n) {
    	vector<vector<int> > ans;
    	vector<int>g;
    	if (n==0) return ans;
    	g.push_back(1);
		ans.push_back(g);
		for (int i=2;i<=n;i++){
			g.clear();
			g.push_back(1);
			for (int j=1;j<i-1;j++)
				g.push_back(ans[i-2][j-1]+ans[i-2][j]);
			g.push_back(1);
			ans.push_back(g);
		}
		return ans;
    }
}k;
vector< vector<int> > gg;
int main(){
	gg=k.generate(5);
	return 0;
}

