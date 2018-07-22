#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	string convertToTitle(int n) {
		string res;
		int tmp;
		while (n > 26)
		{
			int tmp = n % 26;
			n = n / 26;
			if (tmp==0)
			{
				res.push_back('Z');
				n--;
			}
			else
				res.push_back('A' + tmp- 1);
		}
		res.push_back('A' + n - 1);

		reverse(res.begin(), res.end());

		return res;
	}

};

int main()
{
	Solution sol;
	sol.convertToTitle(52);
	return 0;
}
