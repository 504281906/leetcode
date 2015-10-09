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
    bool wordPattern(string a, string b){
        vector<int>k;
        map<char,int>m;
        map<string,int>m1;
        int t=1;
        for (int i=0;i<a.length();i++)
        	if (m[a[i]]==0){
        		k.push_back(t);
        		m[a[i]]=t++;
        	}else k.push_back(m[a[i]]);
        int j=0;
        t=1;
        int i=0;
        while(j<b.length()){
        	string s="";
        	while(b[j]!=' ' && j<b.length()){
        		s+=b[j];
        		j++;
        	}
        	j++;
        	if (m1[s]==0){
        		if (i>=k.size() || k[i]!=t) return 0;
        		m1[s]=t;
        		t++;
        	}else if (i>=k.size() || k[i]!=m1[s]) return 0;
        	i++;
        }
        if (i!=k.size()) return 0;
        return 1;
    }
}gg;
int main(){
	string a="";
	string b="cat dog dog cat";
	cout<<gg.wordPattern(a,b)<<endl;
	return 0;
}
