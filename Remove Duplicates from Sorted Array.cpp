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
    int removeDuplicates(vector<int>& s) {
    	int n=s.size();
    	if (n==0) return 0;
    	int ans=0;
    	int k=s[0];
    	s.erase(s.begin());
    	s.push_back(k);
    	ans++;
    	for (int i=1;i<n;i++){
    		if (k==s[0])
    			s.erase(s.begin());
    		else{
    			ans++;
    			k=s[0];
    			s.erase(s.begin());
    			s.push_back(k);
    		}
    	}
    	return ans;
    }
};
int main(){
	return 0;
}
