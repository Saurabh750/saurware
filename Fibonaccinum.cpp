#include <iostream>
#include <vector>
using namespace std;

long long Fibonum();

long long Fibonum() {
	int n;
	cin >> n;
	if (n < 2)
	{
		return(n);
	}
	else
	{
		vector<long long> myfib;
		myfib.resize(n + 1);
		myfib[0] = 0;
		myfib[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			myfib[i] = myfib[i - 1] + myfib[i - 2];
		}
		return(myfib[n]);
	}
}

int main()
{
	cout << Fibonum() << endl;
	return 0;
}
