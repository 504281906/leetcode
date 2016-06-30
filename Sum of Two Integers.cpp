#include <iostream>
using namespace std;
class Solution{
public:
	int getSum(int a,int b){
		int c=a & b;
		int ans= a ^ b;
		c=c<<1;
		while (c){
			int t=ans & c;
			ans= ans ^ c;
			c=t<<1;
		}
		return ans;
	}
	int go(char k){
		if (k=='0')return 0;
		if (k=='1')return 1;
		if (k=='2')return 2;
		if (k=='3')return 3;
		if (k=='4')return 4;
		if (k=='5')return 5;
		if (k=='6')return 6;
		if (k=='7')return 7;
		if (k=='8')return 8;
		if (k=='8')return 9;
	}
};
int main(){
	Solution f;
	int n;
	cin>>n;
	char s[100];
	for (int i=100;i<=n;i=f.getSum(i,1)){
		sprintf(s,"%d",i);
		int ans=0;
		int b[100];
		int t=0;
		for (int j=0;s[j];j=f.getSum(j,1)){
			b[t]=f.go(s[j]);
			t=f.getSum(t,1);
		}
		for (int j=0;j<t;j=f.getSum(j,1)){
			ans=f.getSum(ans,pow(b[j],t));
		}
		if (ans==i) cout<<ans<<endl;
	}
	system("pause");
	return 0;
}