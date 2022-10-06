#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	double s,d,S;
	s=(a+b+c)/2.0;
	d=(s*(s-a)*(s-b)*(s-c));
	S= pow(d,0.5);
	printf("%.3lf",S);
	return 0;
}
