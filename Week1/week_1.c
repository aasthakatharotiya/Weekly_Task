#include <stdio.h>

int main()
{
    //**Question 1: Positive or Negative**
    int num_1;
    printf("Enter Any Number : ");
    scanf("%d",&num_1);
    
    if(num_1>0)
    {
        printf("%d is Positive Number",num_1);
    }
    else if(num_1<0)
    {
        printf("%d is Negative Number",num_1);
    }
    else
    {
        printf("The Number is Zero");
    }


    //**Question 2: Odd or Even**
    int num_2;
    printf("Enter Any Number : ");
    scanf("%d",&num_2);
    
    if(num_2%2==0)
    {
        printf("%d is Even Number",num_2);
    }
    else
    {
        printf("%d is Odd Number",num_2);
    }


    //**Question 3: Largest among Three Numbers**
    int max_1,max_2,max_3;
    printf("Enter First Number : ");
    scanf("%d",&max_1);
    printf("Enter Second Number : ");
    scanf("%d",&max_2);
    printf("Enter Third Number : ");
    scanf("%d",&max_3);
    
    if(max_1>max_2 && max_1>max_3)
    {
        printf("The First Number is Maximum : %d",max_1);
    }
    else if(max_2>max_1 && max_2>max_3)
    {
        printf("The Second Number is Maximum : %d",max_2);
    }
    else
    {
        printf("The Third Number is Maximum : %d",max_3);
    }


    //**Question 4: Leap Year Check**
    int leap;
    printf("Enter Any Year : ");
    scanf("%d",&leap);
    
    if(leap%4==0)
    {
        printf("%d is The Leap Year",leap);
    }
    else
    {
        printf("%d is Not The Leap Year",leap);
    }


    //**Question 5: Pass/Fail**
    int mark;
    printf("Enter Students Marks : ");
    scanf("%d",&mark);
    
    if(mark>=40)
    {
        printf("Student Was Pass With %d Percentage",mark);
    }
    else
    {
        printf("Student Was Fail With %d Percentage",mark);
    }

    return 0;
}
