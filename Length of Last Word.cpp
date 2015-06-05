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
    int lengthOfLastWord(string s){
        int l=s.length();
        int ans=0;
        if (l==0) return ans;
        int j=l-1;
        while (s[j]==' ') j--;
        for (int i=j;i>=0;i--){
        	if (s[i]!=' ') ans++;
        	else break;
        }
        return ans;
    }
}g;
int main(){
	string s="a";
	cout<<g.lengthOfLastWord(s)<<endl;
	return 0;
}

