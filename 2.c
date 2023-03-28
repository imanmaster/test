#include <stdio.h>

int main()
{
    int a, b, c, formul, x;
    scanf("%d"
          "%d"
          "%d",
          &a, &b, &c);
    for (int i = 0; i < b; i++)
    {
        formul = (c * i) + a;
        x += formul;
    }
    printf("%d", x);
    return 0;
}