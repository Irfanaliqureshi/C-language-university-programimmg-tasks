//Lab 5.4
#include<stdio.h>

 main() 
{ 
	int i,sum=0,num; 
	printf("Enter The Range For The Sum Of Natural Numbers: "); 
	scanf("%d",&num); 
	for(i=0;i<=num;i++)
 	{ 		
sum=sum+i; 
	} 
	printf("Sum Of All The Natural Numbers Upto %d is: %d",num,sum);

 }
