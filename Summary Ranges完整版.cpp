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
	string itos(long long a){
		string ans="";
		int f=0;
		if (a<0){
			f=1;
			a=-a;
		}
		if (a==0) return "0";
		while (a){
			int t=a%10;
			ans=char(t+'0')+ans;
			a/=10;
		}
		if (f) ans="-"+ans;
		return ans;
	}
    vector<string> summaryRanges(vector<int>& n){
    	vector<string>ans;
 		int l=n.size();
 		if (l==0) return ans;
		sort(n.begin(),n.end());
		string s="";
		int t=0;
		long long a=n[0],b=n[0];
		for (int i=1;i<l;i++){
			if (n[i]-n[i-1]==1){
				b=n[i];
				continue;
			}
			else{
				if (a==b)
					s=itos(a);
				else
					s=itos(a)+"->"+itos(b);
				ans.push_back(s);
				a=n[i];
				b=n[i];
			}
		}
		if (a==b)s=itos(a);
		else s=itos(a)+"->"+itos(b);
		ans.push_back(s);
		return ans;
    }
}k;
int main(){
	int a[]={-2147483648,-2147483647,2147483647};
	vector<int>gg(a,a+3);
	vector<string>ans=k.summaryRanges(gg);
	for (int i=0;i<gg.size();i++)
		cout<<gg[i]<<endl;
	for (int i=0;i<ans.size();i++)
		cout<<ans[i]<<endl;
	return 0;
}
