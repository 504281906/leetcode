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
    int removeElement(vector<int>& n, int v) {
        int l=n.size();
        int ans=l;
        while (l--){
        	int k=n[0];
        	n.erase(n.begin());
        	if (k!=v) n.push_back(k);
        	else ans--;
        }
        return ans;
    }
};
int main(){
	return 0;
}

