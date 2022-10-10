#include <stdio.h>
#include <math.h>
int main ()
{
	double x;
	scanf("%lf",&x);
	if (x>=-10&&x<=4)
		printf("y=%.2lf",fabs(x-2));
	else if (x>=5&&x<=7)
		printf("y=%.2lf",x+10);
	else if (x>=8&&x<=12)
		printf("y=%.2lf",x*x*x*x);
	else
		printf("No answer.");
	return 0;
       
 } 
