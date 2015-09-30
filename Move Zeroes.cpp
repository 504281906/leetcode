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
    void moveZeroes(vector<int>& n) {
    	int t=0;
		for (int i=0;i<n.size();i++){
			if (t==n.size()-i) break;
        	if (n[i]==0){
        		for (int j=i+1;j<n.size()-t;j++)
        			n[j-1]=n[j];
        		t++;
        		n[n.size()-t]=0;
        		i--;
        	}
        }
    }
}g;
int main(){
	int a[10]={0,1,0,3,12};
	vector<int>k(a,a+5);
	g.moveZeroes(k);
	return 0;
}
