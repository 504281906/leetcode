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
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        mp.clear();
        int n=nums.size();
        int m=n/2;
        int ans=0;
        for (int i=0;i<n;i++)
        	if ((++mp[nums[i]])>m){
        		ans=nums[i];
        		break;
        	}
        return ans;
    }
};
int main(){
	return 0;
}
