#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int maximalRectangle(vector<vector<char>>& matrix) {
		int maxa = 0;
		vector<int> row;
		int m = matrix.size();
		int n = matrix[0].size();
		vector<vector<int>> dp(m, vector<int>(n, 0));
		for (int i = 0; i < n; i++)
		{
			int tmp = 0;
			int k = 0;
			for (int j = 0; j < m;)
			{
				if (matrix[j][i]=='1')
				{
					tmp++;
				}
				else if(matrix[j][i] == '0')
				{
					dp[k][i] = tmp;
					k++;
					tmp = 0;
					j = k;
					continue;
				}	
				if (j == m - 1)
				{
					dp[k][i] = tmp;
					k++;
					j = k;
					tmp = 0;
				}
				else
				{
					j++;
				}
			}
		}
		for (int i = 0; i < m; i++)
		{
			int maxr = 0;
			int minr = INT_MAX;
			int l = 0;
			for (int j = 0; j < n; j++)
			{
				if (dp[i][j] != 0)
				{
					minr = minr < dp[i][j] ? minr : dp[i][j];
					l++;
					maxr = minr*l;
					maxa = maxa > maxr ? maxa : maxr;
				}
				else
				{
					maxr = 0;
					minr = INT_MAX;
					l = 0;
					continue;
				}
			}
		}
		return maxa;
	}
};

int main()
{
	Solution sol;
	vector<vector<char>> matrix = 
		{
			{'1','0','1','1','0','1'},
			{'1','1','1','1','1','1'},
			{'0','1','1','0','1','1'},
			{'1','1','1','0','1','0'},
			{'0','1','1','1','1','1'},
			{'1','1','0','1','1','1'}
		};
	int res = sol.maximalRectangle(matrix);
	return 0;
}