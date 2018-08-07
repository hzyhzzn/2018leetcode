#include <iostream>
#include<vector>
#include <string>
using namespace std;

char a[100][100];
int main() {
	int T;
	cin >> T;
	while (T--) {
		int m, n;
		string t;

		cin >> m >> n;
		cin.ignore();
		string pp;
		int count = 0;
		for (int i = 0; i<m; i++) {
			getline(cin, pp);
			for (int j = 0; j < n; j++) {
				a[i][j] = pp[j];
			}
		}

		getline(cin, t);
		int size = t.length();

		for (int i = 0; i<m; i++) {
			for (int j = 0; j < n - size + 1; j++) {
				bool flag = true;
				for (int h = j, k = 0; k<size; k++, h++) {
					if (a[i][h] != t[k])
					{
						flag = false;
						break;
					}
				}
				if (flag)count++;
			}
		}

		for (int i = 0; i<m - size + 1; i++) {
			for (int j = 0; j < n; j++) {
				bool flag = true;
				for (int h = i, k = 0; k<size; k++, h++) {
					if (a[h][j] != t[k])
					{
						flag = false;
						break;
					}
				}
				if (flag)count++;
			}
		}

		for (int i = 0; i<m - size + 1; i++) {
			for (int j = 0; j < n - size + 1; j++) {
				bool flag = true;
				for (int h = i, u = j, k = 0; k<size; k++, h++, u++) {
					if (a[h][u] != t[k])
					{
						flag = false;
						break;
					}
				}
				if (flag)count++;
			}
		}

		cout << count << endl;
	}
	return 0;
}