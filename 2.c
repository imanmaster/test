#include <stdio.h>

int main()
{
    int num, num2, num3, num4, num5;
    scanf("%d"
          "%d"
          "%d",
          &num, &num2, &num3);
    for (int i = 0; i < num2; i++)
    {
        num4 = (num3 * i) + num;
        num5 += num4;
    }
    printf("%d", num5);
    return 0;
}