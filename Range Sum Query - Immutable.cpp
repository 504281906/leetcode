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
class NumArray {
public:
	int a[500];
    NumArray(vector<int> &k) {
		int n=k.size();
		if (n==0) return;
		memset(a,0,sizeof(a));
		a[0]=k[0];
		for (int i=1;i<n;i++)
			a[i]=a[i-1]+k[i];
    }
    int sumRange(int i, int j){
    	if (i==0) return a[j];
    	else return a[j]-a[i-1];
    }
};
int main(){
	return 0;
}
