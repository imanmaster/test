#include <stdio.h>
#include <math.h>
int main()
{
	int n, n2, n3, c, c2;
	scanf("%d"
		  "%d"
		  "%d",
		  &n, &n2, &n3);
	if ((n + n2) > n3 && (n2 + n3) > n && (n + n3) > n2)
	{
		c = pow(n3, 2);
		c2 = pow(n2, 2) + pow(n, 2);
		if (c == c2)
		{
			printf("%s", "qaem");
		}
		else if (n == n2 && n == n3 & n2 == n3)
		{
			printf("%s", "moazla");
		}
		else if (n == n2 || n == n3 || n2 == n3)
		{
			printf("%s", "saqein");
		}
		else
		{
			printf("%s", "hichkodam");
		}
	}
	else
	{
		printf("%s", "nemishe");
	}
	return 0;
}