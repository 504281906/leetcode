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
	int next[20010];
	void find(string s){
		memset(next,-1,sizeof(next));
		int l=s.length();
		int i=0,j=-1;
		while (i<l){
			if (j==-1 || s[i]==s[j]) next[++i]=++j;
			else j=next[j];
		}
	}
    int strStr(string h, string s) {
    	if (s=="") return 0;
        find(s);
        int l=h.length();
        int l1=s.length();
        int i=0,j=0,ans=-1;
        while(i<l){
        	if (j==-1){
        		i++,j++;
        	}
        	if (h[i]==s[j]){
        		if (j==l1-1)
        			return i-j;
        		else{
        			i++;
        			j++;
        		}
        	}
        	else j=next[j];
        }
        return -1;
    }
}gg;
int main(){
	cout<<gg.strStr("123jiusdf90","jiu");
	return 0;
}
