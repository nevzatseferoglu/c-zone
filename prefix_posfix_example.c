#include <stdio.h>
int main()
{
	int i=0;
	++i
	printf("%d	%d	%d	%d	%d\n",++i,i++,i++,i,++i);

	// apo --->   4	 2	1	1	1
	// nevzat --> 4	 2	1	1	1
				
	// outpu4	 2	1   4   4
	// compiler : gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.11);
	return 0;
}