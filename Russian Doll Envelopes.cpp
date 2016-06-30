#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	struct Env{
		int widths;
		int heights;
		Env(int a=0,int b=0){
			widths=a;
			heights=b;
		}
		bool operator <(Env a){
			if (widths!=a.widths)
				return widths<a.widths;
			else 
				return heights<a.heights;
		}
	};
	Env a[1010];
    int maxEnvelopes(vector<pair<int, int>>& n) {
		int l=n.size();
		for (int i=0;i<l;i++){
			a[i].heights=n[i].first;
			a[i].widths=n[i].second;
		}
		sort(a,a+l);
		for (int i=0;i<l;i++)
			cout<<a[i].widths<<" "<<a[i].heights<<endl;
		int ans=INT_MIN;
		int b[1010];
		memset(b,1,sizeof(b));
		for (int i=0;i<l;i++){
			for (int j=0;j<i;j++){
				if (a[i].widths>a[j].widths && a[i].heights>a[j].heights && b[i]<b[j]+1)
					b[i]=b[j]+1;
			}
			if (ans<b[i]) ans=b[i];
		}
		return ans;
    }
};
int main(){
	system("pause");
	return 0;
}