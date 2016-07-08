#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class SummaryRanges {
public:
    /** Initialize your data structure here. */
    SummaryRanges() {
        
    }
    struct tree{
			Interval k;
			tree *left;
			tree *right;
			tree(){}
			tree(Interval f){
				k=f;
			}
		}a;
	tree *head;
	vector<Interval>ans;
    void addNum(int val) {
		if (head==NULL){
			tree *h=new tree(Interval(val,val));
			h->left=NULL;
			h->right=NULL;
			head=h;
			return ;
		}
		tree *g=head;
		while(1){
			Interval N=g->k;
			if (N.start<=val && N.end>=val) return;
			tree *L=g->left;
			tree *R=g->right;
			if (N.start>val){
				if (N.start==val+1){
					N.start=val;
					tree *L1=L;
					tree *L2=L;
					int f=0;
					while (L1!=NULL && L1->right!=NULL){
						L2=L1;
						L1=L1->right;
						f=1;
					}
					if (L1!=NULL && L1->k.end+1==N.start){
						N.start=L1->k.start;
						if (f==0) g->left=L1->left;
						else L2->right=L1->left;
					}
					g->k=N;
					return;
				}
				if (L==NULL){
					tree *h=new tree(Interval(val,val));
					h->left=NULL;
					h->right=NULL;
					L=h;
					g->left=L;
					return;
				}
				else{
					g=L;
					continue;
				}
			}
			else{
				if (N.end+1==val){
					N.end=val;
					tree *R1=R;
					tree *R2=R;
					int f=0;
					while(R1!=NULL && R1->left!=NULL){
						f=1;
						R2=R1;
						R1=R1->left;
					}
					if (R1!=NULL && R1->k.start==N.end+1){
						N.end=R1->k.end;
						if (f==0) g->right=R1->right;
						else R2->left=R1->right;
					}
					g->k=N;
					return;
				}

				if (R==NULL){
					tree *h=new tree(Interval(val,val));
					h->left=NULL;
					h->right=NULL;
					R=h;
					g->right=R;
					return;
				}
				else{
					g=R;
					continue;
				}
			}
		}
    }
	void go(tree *root){
		if (root->left!=NULL) go(root->left);
		ans.push_back(root->k);
		if (root->right!=NULL) go(root->right);
		return;
	}

    vector<Interval> getIntervals() {
		ans.clear();
		if (head!=NULL) go(head);
        return ans;
    }
}f;
int main(){
	vector<Interval>gg;
	f.addNum(49);
	f.addNum(97);
	f.addNum(53);
	f.addNum(5);
	f.addNum(33);
	f.addNum(65);
	f.addNum(62);

	f.addNum(51);
	f.addNum(100);
	f.addNum(38);
	f.addNum(61);
	f.addNum(45);
	f.addNum(74);
	f.addNum(27);

	f.addNum(64);
	f.addNum(17);
	f.addNum(36);
	f.addNum(17);
	f.addNum(96);
	f.addNum(12);
	f.addNum(79);

	f.addNum(32);
	f.addNum(68);
	f.addNum(90);
	f.addNum(77);
	f.addNum(18);
	f.addNum(39);
	f.addNum(12);

	f.addNum(93);
	f.addNum(9);
	f.addNum(87);
	f.addNum(42);
	f.addNum(60);
	f.addNum(71);
	f.addNum(12);
	f.addNum(45);

	f.addNum(55);
	f.addNum(40);
	f.addNum(78);
	f.addNum(81);
	f.addNum(26);
	f.addNum(70);
	f.addNum(61);

	f.addNum(56);
	f.addNum(66);
	f.addNum(33);
	f.addNum(7);
	f.addNum(70);
	f.addNum(1);
	f.addNum(11);

	f.addNum(92);
	f.addNum(51);
	f.addNum(90);
	f.addNum(100);
	f.addNum(85);
	f.addNum(80);
	/*f.addNum(0);

	f.addNum(78);
	f.addNum(63);
	f.addNum(42);
	f.addNum(31);
	f.addNum(93);
	f.addNum(41);
	f.addNum(90);

	f.addNum(8);
	f.addNum(24);
	f.addNum(72);
	f.addNum(28);
	f.addNum(30);
	f.addNum(18);
	f.addNum(69);*/
	/*f.addNum(2);
	f.addNum(8);
	f.addNum(6);
	f.addNum(4);
	f.addNum(7);
	f.addNum(3);
	f.addNum(12);
	f.addNum(6);*/
	gg=f.getIntervals();
	for (int i=0;i<gg.size();i++)
		cout<<gg[i].start<<" "<<gg[i].end<<endl;
	system("pause");
	return 0;
}