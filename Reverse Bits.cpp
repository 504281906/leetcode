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
	unsigned int reverseBits(unsigned int n){
		unsigned int k=1<<31;
		unsigned int ans=0;
		while (n){
			if (n&1) ans+=k;
			k>>=1;
			n>>=1;
		}
		return ans;
    }
}gg;
 
int main(){
	cout<<gg.reverseBits(43261596)<<endl;
	return 0;
}

