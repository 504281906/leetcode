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
    TreeNode() : val(0), left(NULL), right(NULL) {}
};
class Codec {
public:

    // Encodes a tree to a single string.
    void BFS(TreeNode* r,stringstream &ss){
    	if (!r){
    		ss<<"-255 ";
    		return;
    	}else{
    		ss<<r->val<<" ";
    		BFS(r->left,ss);
    		BFS(r->right,ss);
    	}
    }
    string serialize(TreeNode* root) {
        stringstream ss;
        BFS(root,ss);
        return ss.str();
    }
	TreeNode* RBFS(TreeNode* rt,stringstream& ss){
		int k;
		if (ss>>k){
			if (k==-255) return NULL;
			else{
				TreeNode* g=new TreeNode(0);
				g->val=k;
				g->left=RBFS(g->left,ss);
				g->right=RBFS(g->right,ss);
				return g;
			}
		}
		else return NULL;
	}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
		stringstream ss(data);
		TreeNode* rt=new TreeNode(0);
		rt=RBFS(rt,ss);
		return rt;
    }
}gg;
int main(){
	TreeNode *r=new TreeNode(1);
	cout<<gg.serialize(r)<<endl;
	return 0;
}
