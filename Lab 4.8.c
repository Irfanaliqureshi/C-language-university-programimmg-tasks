// lab task 4.8
#include<stdio.h> 
#include<conio.h> 
int main() 
{
 	int week; 
	printf("Enter The Week Day: "); 	
scanf("%d",&week); 
	switch (week)
 	{ 		
case 1: 		
	printf("Monday");
 		break; 		
case 2: 			
printf("Tuesday"); 
		break; 	
	case 3: 	
		printf("Wednesday"); 	
	break; 		case 4: 	
		printf("Thrusday"); 	
	break; 		case 5: 	

		printf("Friday"); 	
	break; 		case 6: 		
	printf("Saturday"); 
		break; 	
	case 7: 			printf("Sunday");
 		break;	 	
	default: 		
	printf("Invalid Number Entered!");				
			 	} 
	return 0;
 }
