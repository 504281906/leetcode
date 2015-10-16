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
    int uniquePaths(int m, int n) {
        if (m>n){
        	m=n+m;
        	n=m-n;
        	m=m-n;
        }
        if (m==1) return 1;
        int k=n+m-2;
        int i=m-1;
        long long ans=1;
        while(i--)
        	ans*=(k--);
        for (i=2;i<m;i++)
        	ans/=i;
        return ans;
    }
}gg;
int main(){
	cout<<gg.uniquePaths(10,10)<<endl;
	return 0;
}
