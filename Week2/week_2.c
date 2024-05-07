#include <stdio.h>

int main()
{
    //**Question 1: sum of the number until enter value by user**
    int num,sum=0;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
    {
        sum += i;
    }
    printf("The Sum Of The First %d Natural Numbers is : %d",num,sum);


    //**Question 2: Compound Interest**
    //A = P(1 r/n)^(nt)
    float principal, rate, compound_Interest, finalAmount;
    int years;
    
    printf("Enter Principal Amount : ");
    scanf("%f",&principal);
    printf("Enter Annual Interest Rate (in percentage) : ");
    scanf("%f",&rate);
    printf("Enter Time (in Years) : ");
    scanf("%d",&years);
    
    rate /= 100;

    finalAmount = principal;

    for (int i = 0; i < years; i++)
    {
        finalAmount += finalAmount * rate;
    }

    compound_Interest = finalAmount - principal;

    printf("Compound Interest : %0.2f",compound_Interest);


    //**Question 2: Reverse Elements*
    int rev, arr[rev];
	printf("Enter Any Numbers : ");
	scanf("%d",&rev);
	for(int i=0; i<rev; i++)
	{
		printf("a[%d] : ",i);
	    scanf("%d",&arr[i]);
	}
	printf("---Reverse Elements---");
	for(int i=rev-1; i>=0; i--)
	{
		printf("\na[%d] : %d",i,arr[i]);
	}


    return 0;
}
