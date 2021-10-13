// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
	int result = 1;
	while (y > 0) {
		if (y % 2 == 0) // y is even
		{
			x = x * x;
			y = y / 2;
		}
		else // y isn't even
		{
			result = result * x;
			y = y - 1;
		}
	}
	return result;
}

// Driver Code
int main()
{
	int x = 2;
	int y = 3;

	cout << (power(x, y));
	return 0;
}
