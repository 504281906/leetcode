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
}*hh;
class Solution {
public:
	vector<string>ans;
	void go(TreeNode* rt,string s){
		if (rt->left==NULL && rt->right==NULL){
			char k[12];
			sprintf(k,"%d",rt->val);
			s+=k;
			ans.push_back(s);
		}
		char k[12];
		sprintf(k,"%d",rt->val);
		s+=k;
		if (rt->left!=NULL){
			go(rt->left,s+"->");
		}
		if (rt->right!=NULL){
			go(rt->right,s+"->");
		}
	}
    vector<string> binaryTreePaths(TreeNode* root) {
    	if (root==NULL) return ans;
        string s="";
        cout<<s<<endl;
        go(root,s);
        return ans;
    }
}gg;
int main(){
	TreeNode *a;
	a=(TreeNode *)malloc(sizeof(TreeNode));
	a->val=1;
	gg.binaryTreePaths(a);
	return 0;
}
