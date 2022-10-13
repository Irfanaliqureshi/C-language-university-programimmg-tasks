
// lab task 5.1
#include<stdio.h> 
#include<conio.h>
 int main()
 { 	
int i,j,num,p=1; 
	printf("Enter Any Number: "); 
	scanf("%d",&num); 
	for(i=0;i<10;i++)
 	{ 
		if(i==0) 
		{ 
			printf("%d^%d = %d\n",num,i,p); 	
		continue; 
		}
 		for(j=0;j<i;j++) 
		{ 			p=p*num; 
		} 		
	printf("%d^%d = %d\n",num,i,p);		
 		p=1; 
	}
 }
