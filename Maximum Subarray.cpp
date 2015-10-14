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
    int maxSubArray(vector<int>& n) {
    	if (n.size()==1) return n[0];
		int ans=-0x7fffffff;
		int k=0;
		for (int i=0;i<n.size();i++){
			k=max(0,k)+n[i];
			if (k>ans) ans=k;
		}
		return ans;
    }
};
int main(){
	return 0;
}
