#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		int res;
		vector<vector<int>> minmap;
		minmap.resize(grid.size());
		minmap[0].push_back(grid[0][0]);
		for (int i= 1; i < grid.size(); i++)
		{
			minmap[i].push_back(grid[i][0] + minmap[i-1][0]);
		}
		for (int i = 1; i < grid[0].size(); i++)
		{
			minmap[0].push_back(grid[0][i] + minmap[0][i-1]);
		}

		for (int i = 1; i < grid.size(); i++)
		{
			for (int j = 1; j < grid[0].size(); j++)
			{
				minmap[i].push_back(minmap[i-1][j]<minmap[i][j-1]?minmap[i - 1][j]: minmap[i][j - 1]);
				minmap[i][j] += grid[i][j];
			}
		}
		res = minmap[grid.size()-1][grid[0].size()-1];

		return res;
	}
};

int main()
{
	Solution sol;
	vector<vector<int>> g = {
		{ 1, 2, 5 },
		{ 3, 2, 1 }
	};
	sol.minPathSum(g);
	return 0;
}