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
struct ListNode{
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    	if (head==NULL) return true;
        int l=1;
        ListNode *k=head;
        while (k->next!=NULL){
        	l++;
        	k=k->next;
        }
        if (l<2) return true;
        int f=1;
        if (l%2==0) f=0;
        l/=2;
        k=head;
        for (int i=1;i<l;i++)
        	k=k->next;
        if (f) k->next=k->next->next;
        k=k->next;
        ListNode *g=head;
        ListNode *t=head;
        ListNode *gg=k;
        while (g!=gg){
        	t=g->next;
        	g->next=k;
        	k=g;
        	g=t;
        }
        head=k;
        for (int i=1;i<=l;i++){
        	if (head->val!=gg->val) return false;
        	head=head->next;
        	gg=gg->next;
        }
        return true;
    }
}bb;
int main(){
	ListNode head(1);
	ListNode head2(2);
	ListNode head3(2);
	ListNode head4(1);
	ListNode *a=&head,*b=&head2,*c=&head3,*d=&head4;
	a->val=1;
	a->next=b;
	b->val=2;
	b->next=c;
	c->val=2;
	c->next=d;
	d->val=1;
	d->next=NULL;
	cout<<bb.isPalindrome(a)<<endl;
	return 0;
}
