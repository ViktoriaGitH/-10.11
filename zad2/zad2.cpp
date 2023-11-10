
#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
	double c;
	for (int a = 1; a < 100; ++a)
	{
		for (int b = a; b < 100; ++b)
		{
				c = sqrt(pow(a, 2) + pow(b, 2));
			if (c == static_cast<int>(c))
			{
				printf_s(" a = %d , b= %d , c= %.0lf \n", a, b, c);
			}

		}
   }
}
