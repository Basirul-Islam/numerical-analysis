#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	double x[n],f[n];
	for(int i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&f[i]);
	}
	
	double h = (x[n-1]-x[0])/(n-1);
	double y=0.00,z=0.00;
	for(int i = 1;i<n-1;i++)
     {
		if((i%2) ==0)
			{
				y = y + fabs(f[i]);
			}
		else
			{
				z = z + fabs(f[i]); 
			}
     }
	double area = (h/3)*(f[0]+f[n-1] + 4*z + 2*y);
	//area = area*(-2);
	printf("Area: %lf\n",area);

}
