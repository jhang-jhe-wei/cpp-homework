#include<stdio.h>
int main()
{
double a;
while(scanf("%lf",&a)!=-1)
printf("%.6lf\n",a*a*a*4/3*3.14159265358979323846);
return 0;
}