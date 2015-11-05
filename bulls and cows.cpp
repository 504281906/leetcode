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
private:
	int a[10];
public:
    string getHint(string s, string ss) {
        memset(a,0,sizeof(a));
        int l=s.length();
        int A=0,B=0;
        for (int i=0;i<l;i++)
        	a[s[i]-'0']++;
        for (int i=0;i<l;i++){
        	if (s[i]==ss[i]){
        		A++;
        		if (a[s[i]-'0']>0) a[s[i]-'0']--;
        		else B--;
        	}else if (a[ss[i]-'0']>0){
        		B++;
        		a[ss[i]-'0']--;
        	}
        }
        string ans="";
        char ans1[100];
        sprintf(ans1,"%dA%dB",A,B);
        return ans1;
    }
}gg;
int main(){
	string a="1807";
	string b="7810";
	cout<<gg.getHint(a,b)<<endl;
	return 0;
}

