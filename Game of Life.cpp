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
	int k[2];
	int n,m;
	void gg(vector<vector<int> >& b,int x,int y){
		memset(k,0,sizeof(k));
		if (x-1>=0 && y-1>=0)
			k[b[x-1][y-1]]++;
		if (x-1>=0)
			k[b[x-1][y]]++;
		if (x-1>=0 && y+1<m)
			k[b[x-1][y+1]]++;
		if (y-1>=0)
			k[b[x][y-1]]++;
		if (y+1<m)
			k[b[x][y+1]]++;
		if (x+1<n && y-1>=0)
			k[b[x+1][y-1]]++;
		if (x+1<n)
			k[b[x+1][y]]++;
		if (x+1<n && y+1<m)
			k[b[x+1][y+1]]++;
	}
    void gameOfLife(vector<vector<int> >& b) {
		n=b.size();
		m=b[0].size();
		cout<<n<<m<<endl;
		vector<int>a;
		vector<vector<int> > ans;
		for (int i=0;i<n;i++){
			a.clear();
			for (int j=0;j<m;j++){
				gg(b,i,j);
				if (b[i][j]){
					if (k[1]<2 || k[1]>3)
						a.push_back(0);
					else a.push_back(1);
				}else{
					if (k[1]==3)
						a.push_back(1);
					else a.push_back(0);
				}
			}
			ans.push_back(a);
		}
		b=ans;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++)
				cout<<b[i][j];
			cout<<endl;
		}
    }
}gg;
int main(){
	int b[2]={0,0};
	vector<int>a(b,b+2);
	vector<vector<int> > ans;
	ans.push_back(a);
	gg.gameOfLife(ans);
	return 0;
}
