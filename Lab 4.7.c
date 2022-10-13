// lab task 4.7


#include<stdio.h>
 #include<conio.h>
 int main() 
{ 	
int y;
 	char gender,qualification;
 	printf("Enter Your Gender: "); 	
scanf("%c",&gender); 
	printf("Enter Your Qualification: ");
 	scanf(" %c",&qualification);		 	
printf("Enter Your Years of Service: "); 	
scanf("%d",&y); 	
if(gender=='m') 	
	if(y>=10) 		
	if(qualification=='p') 	
			printf("Your Salary is 15000"); 	
		else if(qualification=='g') 		
		printf("Your Salary is 10000"); 
			else 		
	printf("Wrong Qualification Entered!"); 
		else if(y<10) 		
	if(qualification=='p') 		
		printf("Your Salary is 10000"); 
			else if(qualification=='g') 		
		printf("Your Salary is 7000"); 	
		else 	
		printf("Wrong Qualification Entered!"); 	
	else 
		printf("Invalid Year"); 		
 	else if(gender=='f') 	
	if(y>=10) 		
	if(qualification=='p') 		
		printf("Your Salary is 12000"); 	
		else if(qualification=='g') 		
		printf("Your Salary is 9000"); 	
		else 	
		printf("Wrong Qualification Entered!"); 	
	else if(y<10) 
			if(qualification=='p') 		
		printf("Your Salary is 10000"); 	
		else if(qualification=='g') 	
			printf("Your Salary is 6000"); 
			else 
			printf("Wrong Qualification Entered!"); 	
	else 
		printf("Invalid Year");	
 	else 
	printf("Wrong Gender Entered"); 		

										 return 0;
 }
