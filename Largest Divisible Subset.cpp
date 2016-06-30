#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& n) {
		sort(n.begin(),n.end());
		int l=n.size();
		int k[1000];
		int ans=0;
		int a[1000][2];
		int prev[1000][2];
		memset(prev,-1,sizeof(prev));
		int pos=-1;
		int f=0;
		for (int i=0;i<l;i++){
		    a[i][0]=1;a[i][1]=1;
			for (int j=0;j<i;j++){
				if (n[i]%n[j]==0){
					if (a[j][0]+1>a[i][0]){
						a[i][0]=a[j][0]+1;
						prev[i][0]=j;
					}
				}
				if (n[j]%n[i]==0){
					if (a[j][1]+1>a[i][1]){
						a[i][1]=a[j][1]+1;
						prev[i][1]=j;
					}
				}
			}
			if (ans<a[i][0]){
				pos=i;
				f=0;
				ans=a[i][0];
			}
			if (ans<a[i][1]){
				pos=i;
				f=1;
				ans=a[i][1];
			}
		}
		int t=ans;
		//cout<<ans<<endl;
		for (int i=pos;i!=-1;i=prev[i][f]){
			k[--t]=n[i];
			//cout<<i<<" "<<t<<endl;
		}
		vector<int> gg(k,k+ans);
		return gg;
    }
};
int main(){
	system("pause");
	return 0;
}