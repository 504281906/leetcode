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
    vector<int> getRow(int k){
  		vector<int>ans;
  		for (int i=0;i<=k;i++)
  			ans.push_back(0);
		for (int i=0;i<=k;i++){
			ans[i]=1;
			for (int j=i-1;j>0;j--)
				ans[j]=ans[j]+ans[j-1];
			ans[0]=1;
		}
		/*for (int i=0;i<=k;i++)
			cout<<ans[i]<<" "<<endl;*/
		return ans;
    }
}g;
int main(){
	g.getRow(5);
	return 0;
}
