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
    vector<int> plusOne(vector<int>& d) {
        vector<int>k;
        int t=d.size()-1;
        d[t]++;
		while (d[t]>9){
			if (t==0){
				k.push_back(1);
				d[t]-=10;
				break;
			}
			d[t]-=10;
			d[t-1]++;
			t--;
		}
		for (int i=0;i<d.size();i++)
			k.push_back(d[i]);
        return k;
    }
};
int main(){
	return 0;
}

