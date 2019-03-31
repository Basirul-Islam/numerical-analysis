#include <stdio.h>
#include <math.h>
int main(void)
{	

	int n;
	
	scanf("%d",&n);
	double x[n],f[n];
	for(int i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&f[i]);
	}
	double h;
	h = (x[n-1] - x[0])/(n-1);
	
	double fi = 0.0;
	double v;
	for(int i =1;i<n-1;i++)
	{
		
		fi = fi + f[i];
		
		//printf("%lf = %lf + %lf \n",fi,v,f[i]);
	
	}
	double area = (0.5*(f[0] + f[n-1]) + fi)*h;
	//printf("this the f[n]: %lf\n",f[n-1]);
	//printf("this the area: %lf\n",area);
	//printf("this is the value of h:%lf\n",h);
	//printf("this is the value of fi:%lf\n",fi);
	printf("\"x\",\"f\"\n");
	for(int i =0;i<n;i++)
	{
		//printf("this the value of x[%d] & f[%d]: %lf , %lf \n",i,i,x[i],f[i]);
		printf("%lf,%lf\n",x[i],f[i]);
		
	}
	
	
return 0;	
}	
