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
    int titleToNumber(string s) {
		int l=s.length();
		int t=1;
		int ans=0;
		for (int i=l-1;i>=0;i--){
			int h=s[i]-'A'+1;
			ans+=h*t;
			t*=26;
		}
		return ans;
    }
}gg;
int main(){
	cout<<gg.titleToNumber("ABB")<<endl;
	return 0;
}

