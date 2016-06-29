#include <iostream>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int n) {
		for (int i=1;n>0;i+=2)
			n-=i;
		return n==0;
    }
};
int main(){
	int n;
	Solution f;
	cin>>n;
	cout<<f.isPerfectSquare(n)<<endl;
	system("pause");
	return 0;
}