#include<stdio.h>
#define fesp(x) (x*x + 2*x - 1)

main()
{

	float x;

	for (x = 0.0; x<= 6.5 ;  x+= 0.3);
	printf("\tf(%.1f)=%6.2f",x,fesp(x));
	return 0;

}
