#include <stdio.h>
#include <math.h>
#define EPS 1e-4
int main ()
{
	float a,b,c,y,x,w;
	scanf("%f%f%f",&a,&b,&c);
	y=fabs((a*a+b*b)-c*c);
	x=fabs((a*a+b*b)-c*c);
	w=fabs((a*a+b*b)-c*c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		if(fabs(a-b)<=EPS&&fabs(b-c)<=EPS&&fabs(c-a)<=EPS)
		printf("equilateral triangle");
			else if(fabs(a-b)<=EPS||fabs(b-c)<=EPS||fabs(c-a)<=EPS)
		printf("isoceles triangle");
		else if (y<1e-4||x<1e-4||w<1e-4)
			printf("right-angled triangle");
		else
			printf("arbitrary triangle");
	}
	else 
		printf("It isn't triangle.");
	return 0;
 } 
