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
    int findDuplicate(vector<int>& n) {
        for (int i=0;i<n.size();i++){
        	if (n[i]==n[n[i]-1] && i!=n[i]-1)
        		return n[i];
        	else{
				swap(n[i],n[n[i]-1]);
				if (i!=n[i]-1) i--;
			}
        }
    }
};
int main(){
	return 0;
}

