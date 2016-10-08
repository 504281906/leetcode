#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int a[200];
		memset(a,0,sizeof(a));
		int ans=0;
		int flag=0;
		for (int i=0;i<s.length();i++)
		{
			if (a[s[i]]==0)
			{
				a[s[i]]++;
				flag++;
			}
			else
			{
				a[s[i]]=0;
				flag--;
				ans+=2;
			}
		}
		if (flag>0) ans++;
		return ans;
    }
}gg;

class Solution1 {
private:
	bool exist(vector<int>& nums,int m,int Max)
	{
		long long k=0;
		for (long long i:nums)
		{
			if (i>Max)return false;
			if (k+i<=Max) k+=i;
			else
			{
				m--;
				k=i;
				if (m<0) return false;
			}
		}
		return true;
	}
public:
    int splitArray(vector<int>& nums, int m) {
		long long right=0;
		long long left=0;
		for (long long i:nums){
			left=max(left,i);
			right+=i;
		}
		//¶þ·Ö
		while(left<right){
			long long mid = left+(right-left)/2;
			if (exist(nums,m-1,mid)) right=mid;
				else left=mid+1;
		}
		return left;
    }
}gg3;

int strstart(char *str, char *val,char **ptr)
{
	char *p, *q;
	p = str;
	q = val;
	while (*q != '\0')
	{
		if (*p != *q)
			return 0;
		p++;
		q++;
	}
	if (ptr)
		*ptr = p;
	return 1;
}

int main()
{
	int k1[5]={7,2,5,10,8};
	vector<int>kk(k1,k1+5);
	char *a="file:asd";
	char *b="fil";
	char *c="";
	cout<<strstart(a,b,&c)<<endl;
	cout<<*c++<<endl;
	cout<<gg3.splitArray(kk,2)<<endl;
	system("pause");
}