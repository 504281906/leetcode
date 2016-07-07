#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int k=1337;
		int t=0;
		int l=b.size();
		int ans=1;
		int s=a%k;
		while (1){
			int h=0;
			for (int i=t;i<l;i++){
				int q=(h*10+b[i]);
				b[i]=q/2;
				h=q%2;
			}
			if (h) ans=ans*s%k;
			s=s*s%k;
			while (t<l && b[t]==0) t++;
			if (t>=l) return ans;
		}
		return ans;
    }
}f;
int main(){
	int a[3]={2,0,0};
	vector<int>b(a,a+3);
	cout<<f.superPow(2147483647,b)<<endl;;
	system("pause");
	return 0;
}
