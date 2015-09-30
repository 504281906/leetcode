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
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    	if (isBadVersion(1)) return 1;
        int begin=1;
        int end=n;
        while(begin<end){
        	int mid=(end-begin+1)/2+begin;
        	bool f=isBadVersion(mid);
        	if (f){
        		if (!isBadVersion(mid-1)) return mid;
        		else end=mid;
        	}else begin=mid+1;
        }
        return begin;
    }
};
int main(){
	return 0;
}

