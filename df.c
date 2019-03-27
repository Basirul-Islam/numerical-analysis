#include <stdio.h>
#include <math.h>
#define MAXCHAR 1000
int main(void)
{	
	
	/*
	FILE *fp;
	char str[MAXCHAR];
	char* filename = "/home/iit/df.txt";
	
	
	fp = fopen(filename,"r");
	
	if(fp == NULL)
	{
		printf("file not opened!!");
		return 1;
	}
	
	
*/
	int n;
	
	scanf("%d",&n);
	
	double x[n],f[n];
	double fdf,bdf,cdf;
	
	for(int i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&f[i]);
	}
	
	printf("\"x\",\"f\",\"df\"\n");
	
	printf("%lf,%lf,%lf\n",x[0],f[0],fdf);
	
	/*
  	printf("\"x\",\"f(x)\"\n");
	while(fgets(str,MAXCHAR, fp) != NULL)
	printf("%s",str);
	
	return 0;
	*/
	fdf=(f[1]-f[0])/(x[1]-x[0]); 
	//fclose(fp);

	for(int i=1;i<n-1;i++)
	{
		cdf=(f[i+1]-f[i-1])/(x[i+1]-x[i-1]);
		
		printf("%lf,%lf,%lf\n",x[i],f[i],cdf);
	}
	
	bdf=(f[n-1]-f[n-2])/(x[n-1]-x[n-2]);
	
	printf("%lf,%lf,%lf\n",x[n-1],f[n-1],bdf);
	
	
	return 0;
}
