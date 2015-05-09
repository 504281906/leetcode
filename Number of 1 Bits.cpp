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
    int hammingWeight(unsigned n) {
    	int ans=0;
        while (n){
        	ans+=n&1;
        	n>>=1;
        }
        return ans;
    }
};

/*class Solution {
public:
    int hammingWeight(unsigned n) {
    	int ans=0;
        while (n){
        	ans++;
        	n=n&(n-1);//去掉低位上的1 
        }
        return ans;
    }
};*/

int main(){
	return 0;
}

