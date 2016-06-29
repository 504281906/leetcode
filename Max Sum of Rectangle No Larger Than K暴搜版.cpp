#include <iostream>
#include <cstdio>
#include <vector>
#include <Windows.h>
using namespace std;
/*class Solution {
public:
    int maxSumSubmatrix(vector<vector<int> >& ma, int k) {
		int row = ma.size();
		if (row == 0) return 0;
		int col = ma[0].size();
		if (col == 0) return 0;
		int ans = INT_MIN;
		int a[row][col];
		for (int i=0;i<row;++i){
			for (int j=0;j<col;++j){
				int t = ma[i][j];
				if (i>0) t+=a[i-1][j];
				if (j>0) t+=a[i][j-1];
				if (i>0 && j>0) t-=a[i-1][j-1];
				a[i][j]=t;
				for (int i1=0;i1<=i;i1++){
					for (int j1=0;j1<=j;j1++){
						int s=a[i][j];
						if (i1>0) s-=a[i1-1][j];
						if (j1>0) s-=a[i][j1-1];
						if (i1>0 && j1>0) s+=a[i1-1][j1-1];
						if (s<=k) ans=max(ans,s);
					}
				}
			}
		}
		return ans;
    }
};*/
int main(){
	int a=INT_MIN;
	printf("%d",a);
	system("pause");
	return 0;
}