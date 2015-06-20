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
class MinStack {
private:
	stack<int>st;
	//priority_que<int,vector<int>,greater<int> >q;
	stack<int>tempst;
public:
    void push(int x) {
        st.push(x);
        if (tempst.empty() || x<tempst.top())
        	tempst.push(x);
    }

    void pop() {
        if (!st.empty()){
        	if (st.top()==tempst.top())
        		tempst.pop();
        	st.pop();
        }
    }

    int top() {
        if (!st.empty())
        	return st.top();
    }

    int getMin() {
        if (!tempst.empty())
        	return tempst.top();
    }
};
int main(){
	return 0;
}

