#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
class Solution {
public:
	struct node{
		int a,b,c;
		node(int a1=0,int b1=0,int c1=0){
			a=a1;
			b=b1;
			c=c1;
		}
		bool operator <(node k){
			return c<k.c;
		}
	}g;
    vector<pair<int, int>> kSmallestPairs(vector<int>& n1, vector<int>& n2, int k) {
        int l1=n1.size();
		int l2=n2.size();
		int t=0;
		vector<node>gg;
		for (int i=0;i<l1;i++)
			for (int j=0;j<l2;j++)
				gg.push_back(node(n1[i],n2[j],n1[i]+n2[j]));
		t=gg.size();
		sort(gg.begin(),gg.end());
		vector<pair<int,int>>ans;
		int l=min(t,k);
		for (int i=0;i<l;i++){
			node tt=gg[i];
			pair<int ,int >a;
			a.first=tt.a;
			a.second=tt.b;
			ans.push_back(a);
		}
		return ans;
    }
}f;
int main(){
	int a[3]={1,7,11};
	int b[3]={2,4,6};
	vector<int>s1(a,a+3);
	vector<int>s2(b,b+3);
	f.kSmallestPairs(s1,s2,10);
	system("pause");
	return 0;
}