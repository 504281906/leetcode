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
	int find(TreeNode* l,TreeNode* r){
		if (l==NULL && r==NULL) return 1;
		if (l==NULL || r==NULL) return 0;
		if (l->val!=r->val) return 0;
		if (0==find(l->left,r->right)) return 0;
		if (0==find(l->right,r->left)) return 0;
		return 1;
	}
    bool isSymmetric(TreeNode* root) {
        if (root==NULL) return 1;
		return find(root->left,root->right);
    }
};
int main(){
	return 0;
}
