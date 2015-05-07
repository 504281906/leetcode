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
	bool a[2010][2010];
	int vis[2010];
    bool canFinish(int n, vector<vector<int> >& p) {
    	//ol a[n+1][n+1];
    	//t vis[n+1];
        int m=p.size();
        int i,j;
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
        for (i=0;i<p.size();i++){
			for (j=1;j<p[i].size();j++){
				if (a[p[i][0]][p[i][j]]==0){
        			vis[p[i][0]]++;
					a[p[i][0]][p[i][j]]=1;
				}
        	}
        }
        for (i=1;i<=n;i++){
        	j=0;
        	while (vis[j]!=0){
        		j++;
        		if (j>=n) return false;
        	}
        	vis[j]=1;
        	for (int k=0;k<n;k++)
        		if (a[k][j])
        			vis[k]--;
        }
        return true;
    }
}ans;

int main(){
	//int a[]={1,2};
	vector<vector<int> >hh;
	hh.clear();
	//hh.push_back();
	vector<int>h;
	h.push_back(5);
	h.push_back(8);
	hh.push_back(h);
	h.clear();
	h.push_back(3);
	h.push_back(5);
	hh.push_back(h);
	h.clear();
	h.push_back(1);
	h.push_back(9);
	hh.push_back(h);
	h.clear();
	h.push_back(4);
	h.push_back(5);
	hh.push_back(h);
	h.clear();
	h.push_back(0);
	h.push_back(2);
	hh.push_back(h);
	h.clear();
	h.push_back(1);
	h.push_back(9);
	hh.push_back(h);
	h.clear();
	h.push_back(7);
	h.push_back(8);
	hh.push_back(h);
	h.clear();
	h.push_back(4);
	h.push_back(9);
	hh.push_back(h);
	for (int i=0;i<hh.size();i++){
		for (int j=0;j<hh[i].size();j++)
			cout<<hh[i][j]<<" ";
		cout<<endl;
	}
	cout<<ans.canFinish(10,hh)<<endl;
	return 0;
}
