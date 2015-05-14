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
    int compareVersion(string v1, string v2){
    	int l1=v1.length();
        int l2=v2.length();
        int k1=0,k2=0;
        //int l=max(l1,l2);
        while (k1<l1 || k2<l2){
        	int s1=0,s2=0;
        	while (v1[k1]!='.' && k1<l1){
        		s1=s1*10+v1[k1]-'0';
        		k1++;
        	}
        	k1++;
        	while (v2[k2]!='.' && k2<l2){
        		s2=s2*10+v2[k2]-'0';
        		k2++;
        	}
        	k2++;
        	if (s1>s2) return 1;
        	if (s1<s2) return -1;
        }
        if (k1>=l1+1 && k2>=l2+1) return 0;
        if (k1<=l1) return 1;
        if (k2<=l2) return -1;
    }
}gg;
int main(){
	cout<<gg.compareVersion("1.0","1")<<endl;
	return 0;
}

