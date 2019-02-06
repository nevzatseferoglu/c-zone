#include <stdio.h>
#include <string.h>
int main()
{
	char example[40]="World";

	printf("(Strlen)  measured  as  %ld\n",strlen(example)); //output is '5'  	; 
	printf("(Sizeof)  measured  as  %ld\n",sizeof(example)); //output is '40' 	;

	return(0);
}
