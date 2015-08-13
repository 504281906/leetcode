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
    bool isValid(string s) {
        map<char,int>mp;
        mp['(']=-1;
        mp[')']=1;
        mp['[']=-2;
        mp[']']=2;
        mp['{']=-3;
        mp['}']=3;
        int l=s.length();
        stack<int>st;
        for (int i=0;i<l;i++){
        	if (mp[s[i]]<0) st.push(mp[s[i]]);
        	else if (st.empty() || st.top()+mp[s[i]]!=0) return false;
        	else st.pop();
        }
        if (st.empty()) return true;
        else return false;
    }
};
int main(){
	return 0;
}
