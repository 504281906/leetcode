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
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
        int k1=0,k2=0;
        ListNode *h1=ha,*h2=hb;
        if (ha==NULL || hb==NULL) return NULL;
        while (h1->next!=NULL){
        	h1=h1->next;
        	k1++;
        }
        while (h2->next!=NULL){
        	h2=h2->next;
        	k2++;
        }
        if (h1!=h2) return NULL;
        int t=fabs(k2-k1);
        if (k2<k1) while (t--) ha=ha->next;
        	else while (t--) hb=hb->next;
        while (ha!=NULL && hb!=NULL){
        	if (ha==hb) break;
        	ha=ha->next;
        	hb=hb->next;
        }
        return ha;
    }
};
int main(){
	return 0;
}
