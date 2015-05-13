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
    string convertToTitle(int n) {
        int k=0;
        long long g=1;
        long long ans=1;
        while (ans<=n){
        	g*=26;
        	ans+=g;
        	k++;
        }
        k--;
        g/=26;
        string s="";
        for (int i=0;i<=k;i++){
        	int j=1;
        	while (g*j<n)
        		j++;
        	if (g!=1) j--;
        	s=s+char(j-1+'A');
        	n-=g*j;
        	g/=26;
        }
        return s;
    }
}gg;
int main(){
	cout<<gg.convertToTitle(226)<<endl;
	return 0;
}
