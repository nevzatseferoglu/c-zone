#include <stdio.h>
int fonk(char *s);   //output=17 
int main(void){

	int i;
	char arr[]="Final Examination"; //example array which can be everything that you want ;
	printf("%d\n",fonk(arr)); 
	return 0;
}
int fonk(char *s){   				//This fucntion returns the size of string array type ;
	char *p; 
	p=s;
	while((*p)!='\0')
	{
		++p;
	}
	return p-s;
}

// We can clarify it like below ;

/*strlen :  return length of string */
int strlen(char s[])
{
	int i;
	i=0;
	while (s[i]!='\0')
		++i;
	
	return i;
}
