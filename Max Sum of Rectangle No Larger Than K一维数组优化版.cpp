#include <iostream>
#include <cstdio>
#include <vector>
#include <Windows.h>
#include <set>
using namespace std;
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int> >& ma, int key) {
		int row = ma.size();
		if (row == 0) return 0;
		int col = ma[0].size();
		if (col == 0) return 0;
		int ans = INT_MIN;
		for (int i=0;i<col;++i){
			vector<int> a(row,0);
			for (int j=i;j<col;++j){
				for (int k=0;k<row;++k)
					a[k]+=ma[k][j];
				set<int>s;
				s.insert(0);
				int t=INT_MIN;
				int sum=0;
				for (auto k:a){
					sum+=k;
					auto it=s.lower_bound(sum-key);
					if (it!=s.end()) t=max(t,sum-*it);
					s.insert(sum);
				}
				ans=max(ans,t);
			}
		}
		return ans;
    }
};
int main(){
	int a=INT_MIN;
	printf("%d",a);
	system("pause");
	return 0;
}