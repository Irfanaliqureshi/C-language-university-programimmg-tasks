//lab task 4.5
#include<stdio.h>
 #include<conio.h> 
int main() 
{
 int week;
 	printf("Enter The Week Day: ");
 	scanf("%d",&week); 
	if(week==1) 	
{ 		
printf("Monday");
 	} 	
else if(week==2) 
	{ 		
printf("Tuesday");
 	} 
	else if(week==3)
 	{ 		printf("Wednesday");
 	} 
	else if(week==4) 
	{ 	
	printf("Thursday");
 	} 	
else if(week==5)
 	{ 	
	printf("Friday");
 	} 
	else if(week==6)
 	{ 	
	printf("Saturday"); 
	} 	
else if(week==7)
 	{ 	
	printf("Sunday");
 }
 else printf("Invalid Number Entered!");
 return 0;
 }
