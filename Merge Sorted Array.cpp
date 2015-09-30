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
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        vector<int>a(n1);
        int i=0,j=0;
        int t=0;
        while(i<m && j<n){
        	if (a[i]<=n2[j]) n1[t++]=a[i++];
        	else n1[t++]=n2[j++];
        }
        while(i<m) n1[t++]=a[i++];
        while(j<n) n1[t++]=n2[j++];
    }
};
int main(){
	return 0;
}
