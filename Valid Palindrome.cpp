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
    bool isPalindrome(string s){
        int l=s.length();
        int i=0,j=l-1;
        for (int k=0;k<l;k++)
        	if (s[k]>='A' && s[k]<='Z')
        		s[k]=s[k]-'A'+'a';
        while (i<j){
        	while(i<j){
        		if (s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9') break;
        		else i++;
        	}
        	while (i<j){
        		if (s[j]>='a' && s[j]<='z'|| s[j]>='0' && s[j]<='9') break;
        		else j--;
        	}
        	if (i>j) break;
        	if (s[i]!=s[j]) return false;
        	else{
        		i++;
        		j--;
        	}
        }
        return true;
    }
}gg;
int main(){
	string s="1a1";
	cout<<gg.isPalindrome(s)<<endl;
	return 0;
}

