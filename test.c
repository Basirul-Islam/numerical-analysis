#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	int a=5,b=5;
	double c =3.1416,d=2.14,eps = 1.0e-6;
	if (a==b)
	printf("A & B soman\n");
	else printf("A & B shoman na\n"); 

	if(abs(c-d) <= eps) 
	printf("c & D soman\n");
	else printf("c & D shoman na\n"); 

	
}
/*

int n = 0;
	
	printf("%d , %d , %d , %d \n" ,n++,n++,n++,n++);

*/
/*
int i,n = 1000000;
	double a=1,h;
	h = a/n;
	//printf("%9.6f\n",a);
	
	int count = 0;
	while(1)
	 {
				
		count ++ ;
		a=a/2;
		if(a == 0)
		
		break;
	}
	//printf("%9.6f\n" , a);
	printf("total count: %d" , count);
*/
