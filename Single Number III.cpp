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
    vector<int> singleNumber(vector<int>& n) {
        int ans=0;
        for (int i=0;i<n.size();i++)
        	ans^=n[i];
        ans=ans&(-ans);
        int a=0;
        int b=0;
        for (int i=0;i<n.size();i++)
        	if ((ans&n[i])==0) a^=n[i];
        	else b^=n[i];
        vector<int>k;
        k.push_back(a);
        k.push_back(b);
        return k;
    }
}gg;
int main(){
	int a[6]={1,2,1,3,5,2};
	vector<int>g(a,a+6);
	gg.singleNumber(g);
	return 0;
}
