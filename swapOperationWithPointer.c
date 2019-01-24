#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap_Function(char *c , char *k);
int main()
{	

	 char checkWordA[]= "string 1";
	 char checkWordB[]= "string 2";

    printf("Before altering the string is %s\n",checkWordA);
	printf("Before altering the string is %s\n",checkWordB);
	
	swap_Function(checkWordA,checkWordB);
	printf("\n\n\n");
	
	printf("After the altering the string is %s\n",checkWordA);
	printf("After the altering the string is %s\n",checkWordB);



	return 0;
}
void swap_Function(char *c , char *k)
{
	char *temp;

	temp=(char*)malloc((strlen(c)*strlen(k))*sizeof(char));
	
	strcpy(temp,c);
	strcpy(c,k);
	strcpy(k,temp);
	free(temp);
}