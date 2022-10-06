#include <stdio.h>
int main ()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/63360;
	c=a%63360/36;
	d=a%63360%36/12;
	e=a%63360%36%12;
	if (b>=1)
	    printf("%d mi ",b);
	if (c>=1)
	    printf("%d yd ",c);
	if (d>=1)
	    printf("%d ft ",d);
	if (e>=1)
	    printf("%d in ",e);
	return 0;
 } 
