#include <iostream>
using namespace std;

class Solution {
public:
	int titleToNumber(string s) {
		int n = s.length();
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			res *= 26;
			res += (s[i] - 'A' + 1);
		}
		return res;
	}
};

int main()
{
	Solution sol;
	sol.titleToNumber("AZ");
	return 0;
}