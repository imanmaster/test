#include <stdio.h>
#include <math.h>
int main()
{
	int num, num2, num3, check, check2;
	scanf("%d"
		  "%d"
		  "%d",
		  &num, &num2, &num3);
	if ((num + num2) > num3 && (num2 + num3) > num && (num + num3) > num2)
	{
		check = pow(num3, 2);
		check2 = pow(num2, 2) + pow(num, 2);
		if (check == check2)
		{
			printf("%s", "qaem");
		}
		else if (num == num2 && num == num3 & num2 == num3)
		{
			printf("%s", "moazla");
		}
		else if (num == num2 || num == num3 || num2 == num3)
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