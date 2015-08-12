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
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	int find(TreeNode* root,TreeNode* p,TreeNode* q){
		int a=0;
		if (root==p) a++;
		if (root==q) a++;
		if (root->left!=NULL) a+=find(root->left,p,q);
		if (root->right!=NULL) a+=find(root->right,p,q);
		return a;
	}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (find(root,p,q)==2){
        	if (root->left!=NULL && find(root->left,p,q)==2) root=root->left;
        	else if (root->right!=NULL && find(root->right,p,q)==2) root=root->right;
        	else return root;
        }
    }
};
int main(){
	return 0;
}
