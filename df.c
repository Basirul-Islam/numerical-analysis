#include <stdio.h>
#include <math.h>
int main(void)
{	

	int n;
	
	scanf("%d",&n);
	
	double x[n],f[n];
	double fdf,bdf,cdf;
	
	double y1[n];
	double y2[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&f[i]);
	}
	
	printf("\"x\",\"f\",\"df1\",\"df2\"\n");
	
	//printf("%lf,%lf,%lf\n",x[0],f[0],fdf);
	
	fdf=(f[1]-f[0])/(x[1]-x[0]);
	y1[0] = fdf; 

	for(int i=1;i<n-1;i++)
	{
		cdf=(f[i+1]-f[i-1])/(x[i+1]-x[i-1]);
		
		//printf("%lf,%lf,%lf\n",x[i],f[i],cdf);
		
		y1[i] = cdf;
	}
	
	bdf=(f[n-1]-f[n-2])/(x[n-1]-x[n-2]);
	
	y1[n-1] = bdf; 
	
	//printf("%lf,%lf,%lf\n",x[n-1],f[n-1],bdf);
	
	fdf=(y1[1]-y1[0])/(x[1]-x[0]);
	y2[0] = fdf; 
	
	for(int i=1;i<n-1;i++)
	{
	 	cdf=(y1[i+1]-y1[i-1])/(x[i+1]-x[i-1]);
		
		//printf("%lf,%lf,%lf\n",x[i],f[i],cdf);
		
		y2[i] = cdf;
	
	}
	bdf=(y1[n-1]-y1[n-2])/(x[n-1]-x[n-2]);
	
	y2[n-1] = bdf;
	
	for(int i = 0; i<n; i++)
	{
		printf("%lf,%lf,%lf,%lf\n",x[i],f[i],y1[i],y2[i]);
	
	} 
	
	return 0;
}
