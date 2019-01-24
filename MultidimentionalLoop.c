#include <stdio.h>
int main()
{
	int i=0,j=0,k=0;
	//three dimentional array
	int arr[1][2][3]={ { {1,2,3},{4,5,6} } };
	for(i=0 ; i<1 ; ++i)
	{
		for(j=0 ; j<2 ; ++j)
		{
			for(k=0 ; k<3 ; ++k)
			{
				printf("Adress of %d = %d is %p\n ", arr[i][j][k] , *(*(*(arr+i)+j)+k) , (*(*(arr+i)+j)+k) );
				break;
			} 
		}

    }                             //  arr[i][j][k] = *(*(*(arr+i)+j)+k) it is crucial trick for dimantional array.
	return 0;
}