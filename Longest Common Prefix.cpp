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
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        string ans="";
        if (n<=0) return ans;
        for (int i=0;i<s[0].length();i++){
        	int f=1;
        	char c=s[0][i];
        	for (int j=1;j<n;j++)
        		if (c!=s[j][i]){
        			f=0;
        			break;
        		}
        	if (!f) break;
        	ans+=c;
        }
        return ans;
    }
};
int main(){
	return 0;
}
