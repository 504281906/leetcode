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
using namespace std;

class Solution {
public:
    int rob(vector<int>& a) {
        int l=a.size();
        if (l==0) return 0;
        int dp[l+5][2];
        memset(dp,0,sizeof(dp));
        dp[0][1]=a[0];
        for (int i=1;i<l;i++){
        	dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
        	dp[i][1]=dp[i-1][0]+a[i];
        }
        return max(dp[l][0],dp[l][1]);
    }
};
int main(){
	return 0;
}
