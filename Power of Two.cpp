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
    bool isPowerOfTwo(int n){
        while (n){
        	if (n==1) return true;
        	if (n&1) return false;
        	n>>=1;
        }
        return false;
    }
};
int main(){
	//cout<<k.isPowerOfTwo(1034);
	return 0;
}

