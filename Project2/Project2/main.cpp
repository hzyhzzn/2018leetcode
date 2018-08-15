#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N--)
	{
		string x;
		cin >> x;

		bool f1 = false;
		bool f2 = false;
			bool f21 = false;
			bool f22 = false;
			bool f23 = false;
			bool f24 = false;
		bool f3 = true;
		bool f4 = true;
		bool f5 = true;
		bool f6 = false;

		bool res = false;

		if (x.size()>=8&& x.size() <= 16)
		{
			f1 = true;
		}
		else
		{
			/*if (N == 0)
				cout << "no";
			else*/
			{
				cout << "no" << endl;
				continue;
			}
		}

		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] <= '9'&&x[i] >= '0')
			{
				f21 = true;
			}
			if (x[i] <= 'Z' && x[i] >= 'A')
			{
				f22 = true;
			}
			if (x[i] <= 'z' && x[i] >= 'a')
			{
				f23 = true;
			}
			if (x[i] == '!' || x[i] == '@' || x[i] == '#' ||
				x[i] == '$' || x[i] == '%' || x[i] == '^' ||
				x[i] == '&' || x[i] == '*' || x[i] == '(' || 
				x[i] == ')' || x[i] == '_' || x[i] == '-' ||
				x[i] == '=' || x[i] == '+' || x[i] == '-' ||
				x[i] == '[' || x[i] == ']' || x[i] == '{' || 
				x[i] == '}' || x[i] == ',' || x[i] == '.' || 
				x[i] == '<' || x[i] == '>' || x[i] == '/' || x[i] == '?')
			{
				f24 = true;
			}
			f2 = f21&f22&f23&f24;
		}
		if (!f2)
		{
			/*if (N == 0)
				cout << "no";
			else*/
			{
				cout << "no" << endl;
				continue;
			}
		}

		for (int i = 0; i < x.size()-2; i++)
		{
			if (x[i] <= '9'&&x[i] >= '0'
				&&x[i + 1] <= '9'&&x[i + 1] >= '0'
				&&x[i + 2] <= '9'&&x[i + 2] >= '0')
			{
				if ((x[i] - x[i + 1]) == (x[i + 1] - x[i + 2]))
				{
					f3 = false;
					break;
				}
			}
			
		}
		if (!f3)
		{
			/*if (N == 0)
				cout << "no";
			else*/
			{
				cout << "no" << endl;
				continue;
			}
		}


		for (int i = 0; i < x.size() - 2; i++)
		{
			if (x[i] <= 'Z'&&x[i] >= 'A'
				&&x[i + 1] <= 'Z'&&x[i + 1] >= 'A'
				&&x[i + 2] <= 'Z'&&x[i + 2] >= 'A' )
			{
				if ((x[i] - x[i + 1]) == (x[i + 1] - x[i + 2]) && ((x[i] - x[i + 1]) == -1 || x[i] - x[i + 1]) == 1)
				{
					f4 = false;
					break;
				}
			}

		}
		if (!f4)
		{
			/*if (N == 0)
				cout << "no";
			else*/
			{
				cout << "no" << endl;
				continue;
			}
			
		}


		for (int i = 0; i < x.size() - 2; i++)
		{
			if (x[i] <= 'z'&&x[i] >= 'a'
				&&x[i + 1] <= 'z'&&x[i + 1] >= 'a'
				&&x[i + 2] <= 'z'&&x[i + 2] >= 'a')
			{
				if ((x[i] - x[i + 1]) == (x[i + 1] - x[i + 2])&& ((x[i] - x[i + 1]) == -1|| x[i] - x[i + 1]) == 1)
				{
					f5 = false;
					break;
				}
			}

		}
		if (!f5)
		{
			/*if (N == 0)
				cout << "no";
			else*/
			{
				cout << "no" << endl;
				continue;
			}
			
		}


		if (x.find("password") ||
			x.find("admin") ||
			x.find("qwerty") ||
			x.find("hello") ||
			x.find("iloveyou") ||
			x.find("112233"))
		{
			f6 = true;
		}
		if (!f6)
		{
			/*if (N == 0)
				cout << "no";
			else*/
			{
				cout << "no" << endl;
				continue;
			}
		}


		res = f1&f2&f3&f4&f5 & f6;

		if (res)
		{
			cout << "yes" << endl;
		}

	}
	return 0;
}
