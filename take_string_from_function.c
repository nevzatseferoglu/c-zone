#include <stdio.h>
#include <string.h>
char *foo(char arr[]);
int main(void)
{								
    char example[10] ={"something"};
    strcpy (example, foo(example));   //using strcpy is the better way to get adress from the function.
    printf("%s\n",example);
	
	return 0;   
}
char *foo(char arr[]) 
{
    arr = "attempt"; 

    return arr;
}