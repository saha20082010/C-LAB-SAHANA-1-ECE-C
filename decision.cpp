#include <stdio.h>
int main()

{
	int a,b,choice,res;
	printf("====BRANCHING STATEMENT====\n");
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n====MENU====\n");
	printf("1. check positive,negative or zero\n");
	printf("2. check Even Or Odd\n");
	printf("3. Find The Largest Two Number\n");
	printf("4. Check Divisibility By 5\n");
	printf("\n Enter Your Choice:");
	scanf("%d",&choice);
	printf("\n====RESULT====\n");
	switch(choice)
	{
		case 1:
		    if(a>0)
		
	          printf("%d is positive",a);
		    else if(a<0)
		      printf("%d is Negative",a);
		    else
		      printf("%d is zero",a);
		    break;
		case 2:
			if(a%2==0)
			   printf("%d is Even",a);
			else
			   printf("%d is Odd",a);
			break;
		case 3:
			if(a>b)
			{
				res=a;
				printf("%d is the largest number",res);
			}
			else if(b>a)
			{
				res=a;
				printf("%d is the largest number",res);
			}
			else
			{
				printf("Both numbers are equal");
			}
			break;
		case 4:
			if("a%5==0")
			printf("%d is Divisible by5",a);
			else
			printf("%dis not Divisible by 5",a);
			break;
		default:
			printf("Invalid choice.");	
	}
	return 0;
	
}