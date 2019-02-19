#include <stdio.h>
#define ATTEMP 10    			// define variable can convert every type in !?
int main()
{
	int  				a=112;
	float 				b=1.4;
	double  			c=1.4;
	long 				d=1;
	short 				e=1;
	char 				k=55;

	static int  		as=1;
	static float 		bs=1.4;
	static double   	cs=1.4;
	static long 		ds=1;
	static short 		es=1;
	static char 	    ks=1;

	const int  			ac=1;
	const float 		bc=1.4;
	const double   		cc=1.4;
	const long 			dc=1;
	const short 		ec=1;
	const char 			kc=1;
		
		a=a+ATTEMP;
		printf("%d\n",a); // output 16
		b=b+ATTEMP;
		printf("%.1f\n",b); // output 16.400000
		c=c+ATTEMP;
		printf("%.1lf\n",c); // output 16.400000
		d=d+ATTEMP;
		printf("%ld\n",d); // output 16
		e=e+ATTEMP;
		printf("%d\n",e); // output 16
		k=k+ATTEMP;
		printf("%c\n",k);

	printf("Constant variable situation :\n");

		a=a+ATTEMP;
		printf("%d\n",ac); // output 1
		b=b+ATTEMP;
		printf("%.1f\n",bc); // output 1.4
		c=c+ATTEMP;
		printf("%.1lf\n",cc); // output 1.4
		d=d+ATTEMP;
		printf("%ld\n",dc); // output 1
		e=e+ATTEMP;
		printf("%d\n",ec); // output 1
		k=k+ATTEMP;
		printf("%c\n",kc);


	printf("Static variable situation : \n");

		a=a+ATTEMP;
		printf("%d\n",as); // output 1
		b=b+ATTEMP;
		printf("%.1f\n",bs); // output 1.4
		c=c+ATTEMP;
		printf("%.1lf\n",cs); // output 1.4
		d=d+ATTEMP;
		printf("%ld\n",ds); // output 1
		e=e+ATTEMP;
		printf("%d\n",es); // output 1
		k=k+ATTEMP;
		printf("%c\n",ks);


	return 0;
}