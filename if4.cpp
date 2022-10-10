#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	if (a%2==0&&a%3==0)
		printf("divisible by 2 and 3");
	else if (a%2==0&&a%3!=0)
		printf("divisible by 2 or 3");
	else if (a%2!=0&&a%3==0)
		printf("divisible by 2 or 3");
	else if (a%2!=0&&a%3!=0)
		printf("not divisible by 2 or 3");
	return 0;
}
