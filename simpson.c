#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(X) (1/(1+x*x))
#define EPS 1.0e-6


void integration();

void graph()
{
	int n=7;
	double xx[n];
	double ff[n];
	double a = 0.00;
	double b = 12;
	int i;

     double h,x,y,z;

  h = (b-a)/(n-1);

  //printf("\"x\",\"sin(x)\",\"cos(x)\"\n");

  for(i=0;i<=n;i++){

      x=a+i*h;
      y=f(x);

      //printf("%lf %lf %lf\n",x,y,z);

      xx[i] = x;
      ff[i] = y;
      //printf("%lf,%lf\n",x,y-z);
  }


     double h1;
	h1 = (xx[n-1] - xx[0])/(n-1);

	double fi = 0.0;
	//double v;
	for(int i =1;i<n-1;i++)
	{

		fi = fi + ff[i];

		//printf("%lf = %lf + %lf \n",fi,v,f[i]);

	}
	for(int i =0;i<n;i++)
	{
		//printf("this the value of x[%d] & f[%d]: %lf , %lf \n",i,i,xx[i],ff[i]);
		//printf("%lf,%lf\n",x[i],f[i]);

	}
	double area = (0.5*(ff[0] + ff[n-1]) + fi)*h1;
	printf("this the area: %lf\n",area);
      return;

}
int main(void)
{

graph();

}
