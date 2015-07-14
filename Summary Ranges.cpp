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
    vector<string> summaryRanges(vector<int>& n){
    	vector<string>ans;
 		int l=n.size();
 		if (l==0) return ans;
		sort(n.begin(),n.end());
		string s="";
		int t=0;
		int a=n[0],b;
		for (int i=1;i<l;i++){
			if (n[i]-n[i-1]==1){
				b=n[i];
				continue;
			}
			else{
				char go[100]={};
				if (a==b) {
					itoa(a,go,10);
					s=go;
				}
				else{
					itoa(a,go,10);
					s=go;
					s+="->";
					itoa(b,go,10);
					s=s+go;
				}
				ans.push_back(s);
				a=n[i];
				b=n[i];
			}
		}
		char go[100]={};
		if (a==b){
			itoa(a,go,10);
			s=go;
		}
		else{
			itoa(a,go,10);
			s=go;
			s+="->";
			itoa(b,go,10);
			s=s+go;
		}
		ans.push_back(s);
		return ans;
    }
}k;
int main(){
	int a[]={0,1,2,4,5,7};
	vector<int>gg(a,a+6);
	vector<string>ans=k.summaryRanges(gg);
	for (int i=0;i<ans.size();i++)
		cout<<ans[i]<<endl;
	return 0;
}
