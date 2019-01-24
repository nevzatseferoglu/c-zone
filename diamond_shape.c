#include <stdio.h>
void shape(int);
int main()
{
	int rows;
	printf("Enter the amount of rows : ");
	scanf("%d",&rows);
	shape(rows);

	return 0;
}
void shape(int rows)
{
	int i,j,k,space;
	
	for(i=0 ; i<(2*rows+1)/2 ; ++i)         // Fist for loop is  for triandle like this for input 4     bbb*
	{																				//                  bb***
		for(space=i ; space<rows-1 ; ++space)										//                  b*****		
		{																			//                  *******
			printf(" ");
		}
		for(k=0 ; k<2*i+1 ; ++k)
		{
		printf("*");
	    }
		printf("\n");
	}
	for(i=0 ; i<rows-1 ; ++i)							//second for loop is for under the shape of like this  b*****
	{																			   // 						   bb***
		for(space=rows-i ; space<rows+1; ++space)								   //                          bbb*	
		{
			printf(" ");
		}												//could you contribute to this part of code ? 
		for(k=0 ; k<rows*2-2*(i+1)-1 ; ++k) 
		{
		printf("*");
	    }
		printf("\n");
		
	}
}
