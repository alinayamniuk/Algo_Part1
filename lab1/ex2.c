#include <stdio.h>

int main()
{
int m,n;
float result1, result2, result3;
printf("Input m: ");
scanf("%d", &m);
printf("Input n: ");
scanf("%d", &n);

result1 = m + --n;
result2 = m++<++n;
result3 = n--<--m;

printf("%f\n", result1);
printf("%f\n", result2);
printf("%f\n", result3);
}
