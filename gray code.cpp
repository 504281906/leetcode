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
    vector<int> grayCode(int n) {
        vector<int>ans;
        for (int i=0;i<n;i++){
        	int k=1<<i;
        	for (int j=ans.size()-1;j>=0;j--)
        		ans.push_back(k+ans[j]);
        }
        return ans;
    }
};
int main(){
	int n;
	scanf("%d",&n);
	vector<int> result;  
    result.push_back(0);  
    for(int i=0; i<n;i++){  
        int highest = 1<<i;  
        int len = result.size();  
        for(int i=len -1; i>=0; i--){  
            result.push_back(highest+result[i]);
            cout<<highest+result[i]<<endl;
        }  
    }  
	return 0;
}
