#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> op;
		for (int i = 1; i <= numRows; i++)
			op.push_back(vector<int>(i, 1));

		for (int i = 0; i<numRows; i++)
			for (int j = 1; j<op[i].size() - 1; j++)
				op[i][j] = op[i - 1][j - 1] + op[i - 1][j];

		return op;
	}
};

int main()
{
	Solution sol;
	vector<vector<int>> res;
	res = sol.generate(2);

	return 0;
}