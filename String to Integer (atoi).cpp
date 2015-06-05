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
class Solution {
public:
    int myAtoi(string str) {
        int l=str.length();
        int j=0;
        int f=1;
        int k=0;
        while (str[j]==' ') j++;
        while (str[j]=='+' || str[j]=='-'){
        	if (str[j]=='-') f=f*-1;
        	j++;
        	k++;
        }
        if (k>1) return 0;
        long long ans=0;
        for (int i=j;i<l;i++){
        	if (str[i]>'9' || str[i]<'0') break;
			if (f==1){
				ans=ans*10+str[i]-'0';
				if (ans>2147483647) return 2147483647;
			}
			else{
				ans=ans*10-(str[i]-'0');
				if (ans<-2147483647) return -2147483648;
			}
        }
        return ans;
    }
}g;
int main(){
	string s="-1";
	cout<<g.myAtoi(s)<<endl;
	return 0;
}
