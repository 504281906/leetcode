#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(),n1.end());
		sort(n2.begin(),n2.end());
		int l1=n1.size();
		int l2=n2.size();
		int i=0,j=0;
		vector<int> ans;
		while (i<l1 && j<l2){
			if (n1[i]==n2[j]){
				ans.push_back(n1[i]);
				i++;j++;
			}else{
				if (n1[i]<n2[j]) i++;
				else j++;
			}
		}
		return ans;
    }
};
int main(){
	system("pause");
	return 0;
}
