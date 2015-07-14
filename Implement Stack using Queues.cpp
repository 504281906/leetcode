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
class Stack {
private:
	queue<int>q;
	int a[100];
public:
    // Push element x onto stack.
    void push(int x) {
        q.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        int t=-1;
        memset(a,0,sizeof(a));
        while (!q.empty()){
        	a[++t]=q.front();
        	q.pop();
        }
        for (int i=0;i<t;i++)
        	q.push(a[i]);
    }

    // Get the top element.
    int top() {
        int t=-1;
        memset(a,0,sizeof(a));
        while (!q.empty()){
        	a[++t]=q.front();
        	q.pop();
        }
        int i;
        for (i=0;i<=t;i++)
        	q.push(a[i]);
        return a[i-1];
    }

    // Return whether the stack is empty.
    bool empty() {
        return q.empty();
    }
}go;
int main(){
	go.push(1);
	go.push(2);
	go.push(3);
	//go.top();
	//go.pop();
	cout<<go.top()<<endl;
	return 0;
}
