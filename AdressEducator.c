#include <stdio.h>
int main()
{
	int var[10];

	var[0] =21474836;

	int *p =&var[0];

	printf("Adress was indicated as  &var     is   %p\n\n",&var);   					//adress of adress of first element of arrays(nested adress) ; 
	printf("Adress was indicated as  var      is   %p\n\n",var);    					//adress of first array element itself ; 
	printf("Adress was indicated as  &var[0]  is   %p\n\n",&var[0]);					//adress of first array element itself ; 
	printf("Value of first element of integer array which is var[0] is %d\n",var[0]);	//value of first element of int array  ;

	return 0;
}