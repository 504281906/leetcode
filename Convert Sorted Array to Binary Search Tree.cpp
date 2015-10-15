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

class Solution {
public:
	void go(TreeNode* head,int a,int b,vector<int>& n){
		int m=(a+b)/2;
		head->val=n[m];
		if (a>=b) return;
		if (a!=m){
			TreeNode *k=new TreeNode(0);
			head->left=k;
			go(k,a,m-1,n);
		}
		if (m+1<=b){
			TreeNode *k=new TreeNode(0);
			head->right=k;
			go(k,m+1,b,n);
		}
	}
    TreeNode* sortedArrayToBST(vector<int>& n){
		int l=n.size();
		if (l==0) return NULL;
		TreeNode *head=new TreeNode(0);
		go(head,0,l-1,n);
		return head;
    }
}gg;
int main(){
	int a[3]={3,5,8};
	vector<int>k(a,a+3);
	cout<<gg.sortedArrayToBST(k)->val<<endl;
	return 0;
}
