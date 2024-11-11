#include <iostream>

using namespace std;

int a[1000000] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a[0];
	int count = 0,s=0;
	bool one_ext = false;
	if (a[0] == 1)
	{
		cout << 0;
		return 0;
	}
	while (true)
	{
		int cup = s;
		for (int i = 0; i <= cup; i++)
		{
			if (a[i] % 3 == 0)
			{
				a[++s] = a[i] - 1;
				if (a[i] % 2 == 0)
				{
					a[++s] = a[i] / 2;
				}
				a[i] = a[i] / 3;
			}
			else if (a[i] % 2 == 0)
			{
				a[++s] = a[i] - 1;
				a[i] = a[i] / 2;
			}
			else
				a[i] = a[i] - 1;
			if (a[i] == 1)
			{
				one_ext = true;
				break;
			}
		}
		count++;
		if (one_ext)
			break;
	}
	cout << count;

	return 0;
}