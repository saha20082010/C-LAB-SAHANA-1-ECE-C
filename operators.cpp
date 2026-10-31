#include <stdio.h>
int main()
{
	int a,mb,choice,res;
	printf("===OPERATORA AND EXPRESSION====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Entee the second number:");
	scanf("%d",&b);
	printf("\n---menu---\n");
	printf("1.Addition\n");
	printf("2.Subraction\n");
	printf("3.multiplication\n");
	printf("5.division\n");
	printf("6.modulus\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	
	{
		
	
		case 1:
			res=a+b;
			printf("Result=%d",res);
			break;
		case 2:
			res=a-b;
			printf("Result=%d",res);
			break;
		case 3:
			res=a*b;
			printf("Result=%d",res);
			break;
		case 4:
			if(b!=0)
			{
				res=a/b;
				printf("Result=%d",res);
			}
			else
			{
				printf("Division by zero is not possible.");
			}
			break;
		case 5:
			if(b!=0)
			{
				res=a%b;
				printf("Result=%d",res);
			}
			else
			{
				printf("Modulus by zero is not possible.");
			}
			break;
			default:
				printf("invalid choice.");
			
		
      }
     
	return 0;
}