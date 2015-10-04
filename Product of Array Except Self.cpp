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
    vector<int> productExceptSelf(vector<int>& n) {
    	int a[50010];
    	a[0]=1;
    	a[1]=1;
    	int b[50010];
    	for (int i=1;i<n.size();i++)
    		a[i]=a[i-1]*n[i-1];
    	int t=1;
		for (int i=n.size()-1;i>=0;i--){
			b[i]=t*a[i];
			t*=n[i];
		}
		vector<int>ans;
		for (int i=0;i<n.size();i++)
			ans.push_back(b[i]);
		return ans;
    }
}; 
int main(){
	return 0;
}
