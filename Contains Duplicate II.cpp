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
    bool containsNearbyDuplicate(vector<int>& a, int k){
        int n=a.size();
        map<int,int>mp;
        for (int i=0;i<n;i++){
        	if (mp.find(a[i])!=mp.end() && i-mp[a[i]]<=k)
        		return true;
        	else mp[a[i]]=i;
        }
        return false;
    }
}g;
int main(){
	int b[]={1,2,1};
	vector<int>a(2,2);
	cout<<g.containsNearbyDuplicate(a,0)<<endl;
	return 0;
}

