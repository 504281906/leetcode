#include <iostream>
using namespace std;
class Solution {
public:
	int a[500];
	void GoPrime(){
		a[0]=2;
		int t=1;
		int k=3;
		while(t<500){
			int f=1;
			for (int i=0;i<t;i++){
				if (k%a[i]==0){
					f=0;
					break;
				}
			}
			if (f) a[t++]=k;
			k+=2;
		}
	}
    bool isPerfectSquare(int n) {
		GoPrime();
        int t=0;
		while (1){
			if (n==1) return true;
			if (t>=500) return false;
			if (n%a[t]==0){
				int k=0;
				while(n%a[t]==0){
					k++;
					n/=a[t];
				}
				if (k%2==1)return false;
			}
			t++;
		}
		return true;
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