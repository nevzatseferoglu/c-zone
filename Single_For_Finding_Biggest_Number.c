#include <stdio.h>
int find_maxnumber(int a1,int a2,int a3,int a4,int a5);
int main()
{
	int sum;
	sum=find_maxnumber(1,2,3,4,5);
	printf("The greatest number is : %d\n",sum);
	return 0;
}
int find_maxnumber(int a1,int a2,int a3,int a4,int a5)
{
	int max=a1,arr[5]={a1,a2,a3,a4,a5},i;
	
	for(i=0;i<5;++i)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	return max;
}