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
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        for (int i=0;i<c.size();i++){
        	if (c.size()-i<=c[i]) return c.size()-i;
        }
        return 0;
    }
};
int main(){
	int a[2]={11,15};
	vector<int>k(a,a+2);
	gg.hIndex(k); 
	return 0;
}

