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
class NumMatrix {
public:
	int a[1100][1100];
    NumMatrix(vector<vector<int> > &p) {
        int n=p.size();
        if (n==0) return;
        int m=p[0].size();
        cout<<n<<" "<<m<<endl;
        memset(a,0,sizeof(a));
        for (int i=1;i<=n;i++)
        	for (int j=1;j<=m;j++)
        		a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+p[i-1][j-1];
        for (int i=1;i<=n;i++){
        	for (int j=1;j<=m;j++)
        		cout<<a[i][j]<<" ";
        	cout<<endl;
        }
    }

    int sumRegion(int r1, int c1, int r2, int c2) {
        int ans=0;
        r1++;c1++;r2++;c2++;
        ans=a[r2][c2]-a[r1-1][c2]-a[r2][c1-1]+a[r1-1][c1-1];
        cout<<ans<<endl;
        return ans;
    }
};
int main(){
	return 0;
}
