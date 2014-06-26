#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "galois.h"

int main()
{
	int i,j;
	
	i=galois_single_divide(8,255,8);
	j=galois_single_multiply(255,galois_inverse(255,8),8);

	printf("%d %d\n",i,j);
	return 0;
	
	//for testing git commands
}
