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
    string addBinary(string a, string b) {
        int l1=a.length()-1;
        int l2=b.length()-1;
        string s="";
        int t=0;
        int k=0;
        while(l1>=0 && l2>=0){
        	k=a[l1]-'0'+b[l2]-'0'+t;
        	if (k&1) s+='1';
        	else s+='0';
        	if (k>=2) t=1;
        	else t=0;
        	l1--;
        	l2--;
        }
        
        while (l1>=0){
        	k=a[l1--]-'0'+t;
        	if (k&1) s+='1';
        	else s+='0';
        	if (k>=2) t=1;
        	else t=0;
        }
        while (l2>=0){
        	k=b[l2--]-'0'+t;
        	if (k&1) s+='1';
        	else s+='0';
        	if (k>=2) t=1;
        	else t=0;
        }
        if (t) s+='1';
        string ans="";
        for (int i=s.length()-1;i>=0;i--)
        	ans+=s[i];
        return ans;
    }
}gg;
int main(){
	string a="1011";
	string b="110";
	cout<<gg.addBinary(a,b);
	return 0;
}
