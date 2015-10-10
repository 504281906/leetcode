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
    int numTrees(int n) {
		int a[10000];
		memset(a,0,sizeof(a));
		a[0]=1;
		a[1]=1;
		a[2]=2;
		for (int i=3;i<=n;i++)
			for (int j=1;j<=i;j++)
				a[i]+=a[j-1]*a[i-j];
		return a[n];
    }
}gg;
int main(){
	cout<<gg.numTrees(4);
	return 0;
}
