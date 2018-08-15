#include <iostream>
#include <math.h>
using namespace std;

int roundx(double x)
{
	return (x>0.0) ? floor(x + 0.5) : ceil(x - 0.5);
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		int res = 0;
		if (m <= 5000)
		{
			res = 0;
			cout << res << endl;
			continue;
		}
		if (m < 8000)
		{
			res += roundx((m - 3000)*0.03);
			ceil(res);
			cout << res << endl;
			continue;
		}
		else
		{
			res = 90;
		}

		if (m < 17000)
		{
			res += roundx((m - 8000)*0.1);
			cout << res << endl;
			continue;
		}
		else
		{
			res = 990;
		}

		if (m < 30000)
		{
			res += roundx((m - 17000)*0.2);
			cout << res << endl;
			continue;
		}
		else
		{
			res = 3590;
		}

		if (m < 40000)
		{
			res += roundx((m - 30000)*0.25);
			cout << res << endl;
			continue;
		}
		else
		{
			res = 6090;
		}

		if (m < 60000)
		{
			res += roundx((m - 40000)*0.3);
			cout << res << endl;
			continue;
		}
		else
		{
			res = 12090;
		}

		if (m < 85000)
		{
			res += roundx((m - 60000)*0.35);
			cout << res << endl;
			continue;
		}
		else
		{
			res = 20840;
			res += roundx((m - 85000)*0.45);
			cout << res << endl;
			continue;
		}

		cout << res << endl;
		continue;
	}
	return 0;
}