#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b,c,area,perimeter,s;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
		{
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter=a+b+c;
		printf("%.2lf,%.2lf",area,perimeter);
		}
	else
		printf("Error!");
	return 0;	
}

