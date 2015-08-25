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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int ans=0;
	int m=0x7fffffff;
    int minDepth(TreeNode* root) {
		if (root==NULL) return ans;
		if (root->left==NULL && root->right==NULL)
			return ans+1;
		else{
			
			if (root->left!=NULL){
				ans++;
				m=min(m,minDepth(root->left));
				ans--;
			}
			
			if (root->right!=NULL){
				ans++;
				m=min(m,minDepth(root->right));
				ans--;
			}
		}
		return m;
    }
};
int main(){
	return 0;
}
