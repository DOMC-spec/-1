#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
	return (x / (1 + pow(x, 3)));
}

int main()
{
	double a = 0, b = 1, h;
	double s0 = 0, s = 777777777777777, eps = 0.000001;
	int n = 50;



	while (abs(s0 - s) > eps)
	{
		n = 2 * n;
		s0 = s;
		h = (b - a) / n;
		s = 0;

		s = f(a) + f(b);

		for (int i = 0; i < n - 1; i++)
		{
			double x = a + h * i;
			s = s + 2 * f(x);
		}
		s = s/2 * h;
	}



	cout << s;
}
