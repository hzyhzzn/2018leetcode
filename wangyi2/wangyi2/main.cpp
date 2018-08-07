#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T)
	{
		int N;
		cin >> N;
		int n = N;
		vector<int> res;
		while (N)
		{
			int data;
			cin >> data;
			res.push_back(data);
			N--;
		}

		vector<int> r;
		int j = 0;
		for (int i = n-1; i >= 0; i--)
		{
			vector<int>::iterator result = find(r.begin(), r.end(), res[i]); 
			if (result == r.end()) //√ª’“µΩ
			{
				r.push_back(res[i]);
			}
		}

		for (int i = 0; i < r.size()-1; i++)
		{
			cout << r[i]<<" ";
		}
		cout << r[r.size()-1] << endl;
		T--;
	}
	return 0;
}