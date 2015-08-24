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
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    	if (l1==NULL) return l2;
    	if (l2==NULL) return l1;
    	ListNode *head=l1;
    	int f; 
    	if (l1->val<l2->val)
    	{
			l1=l1->next;
			f=1;
		}
    	else{
    		head=l2;
			l2=l2->next;
			f=2;
    	}
    	ListNode *k=head;
        while (l1!=NULL && l2!=NULL){
        	if (l1->val<l2->val){
        		k->next=l1;
        		k=k->next;
        		if (l1->next!=NULL) l1=l1->next;
        		else {f=1;break;}
        	}
        	else{
        		k->next=l2;
        		k=k->next;
        		if (l2->next!=NULL) l2=l2->next;
        		else {f=2;break;}
        	}
        }
        if (f==1)
        	k->next=l2;
        else k->next=l1;
        return head;
    }
};
int main(){
	return 0;
}
