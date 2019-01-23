#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(X) ((X)*(X)*(X) - 4*(X) - 8.93)
#define EPS 1.0e-9

int main (void)
{
	int n=0;
	double a=2,b=3,x0;
	
	if(f(a)*f(b)>0)
	{
		printf("No root.......\n");
		exit(0);
	}
	
//Again:
	
for(;;)
	{
		
	//GetRoot
	x0 = (a+b)/2;
	n++;
	
	//checkRoot
	if(fabs(f(x0))<EPS)
	{
		printf("Root = %lf\n",x0);
		printf("No of ITR,= %d\n",n);
		exit(0);
	}
	if(f(a)*f(x0)<0) 
	{
		b = x0;
	}
	else a = x0;
	
	}	//goto Again;
}




/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
	double a=0.0,b=80.0,x,eps = 1.0e-6;
	double f = cos(x);
	if(cos(a)*cos(b)<0.0)
	{
		
		while(1)
		{
			x=(a+b)/2;
			if(fabs(cos(x)) <= eps) 
			{		
				printf("this is the root %lf",x);
				break;
			}	
			else
			{
				if(cos(a)*cos(x)<0.0)
				b=x;
				else 
				a=x;
			}
		}
	}

	else
	printf("Root doesn't exist in this range");
	
	
	/*
	double c =3.1416,d=2.14,eps = 1.0e-6;
	if (a==b)
	printf("A & B soman\n");
	else printf("A & B shoman na\n"); 

	if(abs(c-d) <= eps) 
	printf("c & D soman\n");
	else printf("c & D shoman na\n");
	*/ 

	

