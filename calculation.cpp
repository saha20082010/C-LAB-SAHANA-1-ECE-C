#include <stdio.h>
int main()
{
	int m1,m2,m3,total,choice;
	float average;
	printf("====STUDENT RESULT CALCULATION====\n");
	printf("Enter mark in subjest1:");
	scanf("%d",&m1);
	printf("Enter mark in subject2:");
	scanf("%d",&m2);
	printf("Enter mark in subject3:");
	scanf("%d",&m3);
	total=m1+m2+m3;
	average=total/3.0;
	printf("\ntotal marks=%d",total);
	printf("\nAverage=%.2f",average);
	if(m1>=40&&m2>=40&&m3>=40)
	{
		printf("\nResult=PASS");
		if(average>=90)
	      choice=1;
	    else if(average>=80)
	      choice=2;
	    else if(average>=70)
	      choice=3;
	    else if(average>=60)
	      choice=4;
	    else 
	      choice=5;
	    switch(choice)
	    {
	
		case 1:
			
			printf("\nGrade=A+");
			break;
		case 2:
			printf("\nGrade=A");
			break;
		case 3:
			
			printf("\nGrade=B");
			break;
		case 4:
			
			printf("\nGrade=c");
			break;
		case 5:
			
			printf("\nGrade=D");
			break;
	}
		
      }
      else
      {
      	printf("\nResult=FAIL");
      	printf("\nGrade=F");
	  }
	return 0;
}