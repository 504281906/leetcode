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
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root){
    	if (root==NULL) return NULL;
    	if (root->left==NULL && root->right==NULL) return root;
		TreeNode* k=root->left;
    	root->left=root->right;
    	root->right=k;
    	if (root->left!=NULL) invertTree(root->left);
    	if (root->right!=NULL) invertTree(root->right);
    	return root;
    }
};
int main(){
	return 0;
}
