#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n)
	{
		string str;
		cin >> str;

		int h = 0;
		int m = 0;
		int s = 0;

		h = (str[0] - '0') * 10 + str[1] - '0';
		m = (str[3] - '0') * 10 + str[4] - '0';
		s = (str[6] - '0') * 10 + str[7] - '0';

		if (h > 23)
		{
			h = h % 10;
			str[0] = '0';
			str[1] = h + '0';
		}

		if (m > 59)
		{
			m = m % 10;
			str[3] = '0';
			str[4] = m + '0';
		}

		if (s > 59)
		{
			s = s % 10;
			str[6] = '0';
			str[7] = s + '0';
		}

		cout << str << endl;
		n--;
	}
	return 0;
}