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
class Solution{
	public:
		bool isAnagram(string s,string t){
			int a[26],b[26];
			memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
			int l1=s.length();
			int l2=t.length();
			if (l1!=l2) return false;
			for (int i=0;i<l1;i++){
				a[s[i]-'a']++;
				b[t[i]-'a']++;
			}
			for (int i=0;i<26;i++)
				if (a[i]!=b[i]) return false;
			return true;
		}
};
int main(){
	return 0;
}
