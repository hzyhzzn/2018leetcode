#include <iostream>
#include <vector>
using namespace std;
/**
* Your NumMatrix object will be instantiated and called as such:
* NumMatrix obj = new NumMatrix(matrix);
* int param_1 = obj.sumRegion(row1,col1,row2,col2);
*/
class NumMatrix {
public:
	vector<vector<int>> res;

	NumMatrix(vector<vector<int>> matrix) {
		int sum;

		res.resize(matrix.size());//r§Ý§Ý

		for (int j = 0; j<matrix.size(); j++)
		{
			sum = 0;
			for (int i = 0; i<matrix[0].size(); i++)
			{
				sum += matrix[j][i];
				res[j].push_back(sum);
			}
		}
		for (int j = 1; j<matrix.size(); j++)
		{
			for (int i = 0; i<matrix[0].size(); i++)
			{
				res[j][i] += res[j - 1][i];
			}
		}
	}

	int sumRegion(int row1, int col1, int row2, int col2) {

		if (row1 == 0 && col1 == 0)
			return res[row2][col2];
		else if (row1 == 0)
			return res[row2][col2] - res[row2][col1 - 1];
		else if (col1 == 0)
			return res[row2][col2] - res[row1 - 1][col2];
		else
			return res[row2][col2] - res[row1 - 1][col2] - res[row2][col1 - 1] + res[row1 - 1][col1 - 1];
	}
};

int main()
{
	vector<vector<int>> matr = {
		{ 3, 0, 1, 4, 2 },
		{ 5, 6, 3, 2, 1 },
		{ 1, 2, 0, 1, 5 },
		{ 4, 1, 0, 1, 7 },
		{ 1, 0, 3, 0, 5 } };

	NumMatrix* obj = new NumMatrix(matr);
	int param_1 = obj->sumRegion(0, 0, 1, 1);
	return 0;
}
