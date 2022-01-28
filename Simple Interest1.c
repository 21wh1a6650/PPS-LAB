#include <stdio.h>
#include <math.h>
int main()
{
	//simple interest
	float p,t,r,SI,CI;
	printf("enter the values of p,t,r");
	scanf("%f %f %f",&p,&t,&r);
	SI=(p*t*r)/100;
	printf("simple interest=%f",SI);
	CI=p*(pow(1+r/100,t))-p;
	printf("Compound interest amount is %f",CI);
}
