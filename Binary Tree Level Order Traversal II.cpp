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
    vector<vector<int> > levelOrderBottom(TreeNode* root) {
		vector<int>a[1000];
		vector<vector<int> >b;
		queue<TreeNode*>q[2];
		int t=0;
		if (root==NULL) return b;
		if (!q[0].empty())q[0].pop();
		if (!q[1].empty())q[1].pop();
		q[0].push(root);
		int n=0;
		int f=0;
		while(!f){
			f=1;
			int g=(t+1)%2;
			while(!q[t].empty()){
				TreeNode* k=q[t].front();
				a[n].push_back(k->val);
				q[t].pop();
				if (k->left!=NULL){
					f=0;
					q[g].push(k->left);
				}
				if (k->right!=NULL){
					f=0;
					q[g].push(k->right);
				}
			}
			t=g;
			n++;
		}
		for (int i=n-1;i>=0;i--)
			b.push_back(a[i]);
		return b;
    }
}gg;
int main(){
	TreeNode *a=new TreeNode(1);
	TreeNode *b=new TreeNode(2);
	a->left=b;
	gg.levelOrderBottom(a);
	return 0;
}
