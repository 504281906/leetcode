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
	map<long long,int>mp;
	priority_queue<long long,vector<long long>,greater<long long> >q;
    int nthUglyNumber(int n) {
		mp[1]=1;
		q.push(1);
		int t=1;
		long long ans=1;
		while(t<n){
			ans=q.top();
			q.pop();
			if (!mp[ans*2]){
				q.push(ans*2);
				mp[ans*2]=1;
			}
			if (!mp[ans*3]){
				q.push(ans*3);
				mp[ans*3]=1;
			}
			if (!mp[ans*5]){
				q.push(ans*5);
				mp[ans*5]=1;
			}
			t++;
		}
		ans=q.top();
		return ans;
    }
};
int main(){
	priority_queue<int,vector<int>,greater<int> >q;
	return 0;
}
