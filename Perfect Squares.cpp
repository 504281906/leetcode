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
    int numSquares(int n) {
		int a[n+1];
		a[1]=1;
		for (int i=2;i<=n;i++){
			if (i==(int)sqrt(i)*(int)sqrt(i)){
				a[i]=1;
				continue;
			}
			int j=1;
			int m=0x3fffffff;
			while (j*j<=i){
				m=min(m,a[i-j*j]+1);
				j++;
			}
			a[i]=m;	
		}
		return a[n];
    }
}gg;
int main(){
	cout<<gg.numSquares(11);
	return 0;
}
