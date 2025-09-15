#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
	return (x / (1 + pow(x, 3)));
}

int main()
{
	double a = 0, b = 1, h;
	double s0 = 0, s = 777777777777777, eps = 0.000001, integral = 0.0;
	int n = 50;



	while (abs(s0 - s) > eps)
	{
		n = 2 * n;
		s0 = s;
		h = (b - a) / n;
		s = 0;

		for (int i = 1; i < n ; i++)
		{
			double x = a + h * i;
			s = s + f(x);
		}
		s = s * h;
	}



	cout << s;
}
