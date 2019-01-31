#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(X) (sin(X)-cos(X))
#define EPS 1.0e-6
void graph(double a, double b)
{
	int i, n=300;
  double h,x,y,z;
 
  h = (b-a)/n;
 
  printf("\"x\",\"sin(x)\",\"cos(x)\"\n");
 
  for(i=0;i<=300;i++){
 
      x=a+i*h;
      y=sin(x);
	  z = cos(x);
      printf("%lf %lf %lf\n",x,y,z);
  }   
      return;

}

double getRoot(double a,double b)
{

	int n=0;
	//double a=0,b=3.1416,x0;
	double x0;
	if(f(a)*f(b)>0)
	{
		printf("No root.......\n");
		
		//exit(0);
		
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
		//printf("Root = %lf\n",x0);
		//printf("No of ITR,= %d\n",n);
		break;
	}
	if(f(a)*f(x0)<0) 
	{
		b = x0;
	}
	else a = x0;
	
	}	//goto Again;
	
	return x0;
}
int main (void)
{	
	double a,b;
	a = getRoot(0.00,3.1416);
	b = getRoot(3.1416,6.28);
	//printf("%lf  %lf\n",a,b);
	graph(a,b);
}


