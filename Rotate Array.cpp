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
    void rotate(vector<int>& a, int k) {
        vector<int>b;
        int n=a.size();
        k=k%n;
        if (k==0) return;
        for (int i=n-k;i<n;i++)
        	b.push_back(a[i]);
        for (int i=0;i<n-k;i++)
        	b.push_back(a[i]);
        a=b;
        return ;
    }
}gg;

int main(){
	int a[]={1,2,3};
	vector<int>b(a,a+3);
	gg.rotate(b,1);
	for (int i=0;i<b.size();i++)
		cout<<b[i]<<endl;
	return 0;
}
