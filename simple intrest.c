#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the principle intrest: ");
    scanf("%f", &p);
    printf("Enter the rate of intrest: ");
    scanf("%f", &r);
    printf("Enter the no. of year: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple intrest=%f", si);
    return 0;
}