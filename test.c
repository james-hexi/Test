#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "galois.h"

int main()
{
	int i;
	
	i=galois_single_divide(8,255,8);
//	i=galois_single_multiply(255,galois_inverse(255,8),8);

	printf("%d\n",i);
	return 0;
}
