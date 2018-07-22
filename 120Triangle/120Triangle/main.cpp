#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {
		int res = INT_MAX;
		int tmp;
		int n = triangle.size();
		for (int i = 1; i < n; i++)
		{
			triangle[i][0] += triangle[i-1][0];
			triangle[i][i] += triangle[i - 1][i-1];
		}

		for (int i = 2; i < n; i++)
		{
			for (int j = 1; j < i; j++)
			{
				tmp = triangle[i - 1][j - 1] < triangle[i - 1][j] ? triangle[i - 1][j - 1] : triangle[i - 1][j];
				triangle[i][j] += tmp;
			}
		}

		for (int i = 0; i < n; i++)
		{
			if (res>triangle[n - 1][i])
			{
				res = triangle[n - 1][i];
			}			
		}

		return res;
	}
};

int main()
{
	Solution sol;
	vector<vector<int>> tr = {
		{2},
		{3,4},
		{6,5,7},
		{4,1,8,3}
	};
	sol.minimumTotal(tr);
	return 0;
}