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
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int l=nums.size();
        mp.clear();
        for (int i=0;i<l;i++)
        	if (mp[nums[i]]==0) mp[nums[i]]=1;
        		else return true;
        return false;
    }
};
int main(){
	return 0;
}

