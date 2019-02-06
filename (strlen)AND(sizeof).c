#include <stdio.h>
#include <string.h>
int main()
{
	char example[40]="World";

	printf("(Strlen)  measured  as  %ld\n",strlen(example));
	printf("(Sizeof)  measured  as  %ld\n",sizeof(example));

 return(0);
}