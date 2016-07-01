#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	struct go{
		int q,w;
		go(int a=0,int b=0){
			q=a;w=b;
		}
		bool operator <(go a){
			return w<a.w;
		}
	};
    vector<int> topKFrequent(vector<int>& n, int k) {
        sort(n.begin(),n.end());
		int l=n.size();
		vector<go>a;
		int i=0;
		while(i<l){
			go h;
			h.q=n[i++];
			h.w=1;
			while (n[i]==h.q){
				h.w++;i++;
			}
			a.push_back(h);
		}
		sort(a.begin(),a.end());
		l=a.size();
		vector<int>ans;
		while (k>0){
			go h=a[l-1];
			k--;
			ans.push_back(h.q);
			l--;
		}
		return ans;
    }
};
int main(){
	system("pause");
	return 0;
}
