#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		bool res = false;
		if (matrix.empty())
			return res;
		if (matrix[0].empty())
			return res;
		int m = matrix.size();
		int n = matrix[0].size();
		int row = 0;
		for (int i = 0; i < m; i++)
		{
			if (matrix[i][0]>target)
			{
				row = i - 1;
				if (row<0)
				{
					res = false;
					return res;
				}
				break;
			}
			if (matrix[i][0]==target)
			{
				row = i;
				break;
			}
			row = i;
		}
		for (int i = 0; i < n; i++)
		{
			if (matrix[row][i]==target)
			{
				res = true;
				break;
			}
			else if (matrix[row][i] > target)
			{
				res = false;
				break;
			}
		}
		return res;
	}
};

int main()
{
	Solution sol;
	vector<vector<int>> matrix = {
		{1},
		{3}
	};
	bool re = sol.searchMatrix(matrix,3);
	return 0;
}