#include <stdio.h>

int main()
{
    //Question-1
    printf("-------- Print Hello World --------\n\n");
    printf("Hello World");


    //Question-2

    printf("\n-------- For Addition --------\n\n");
    int sum1, sum2, sum;
    printf("Enter First Number : ");
    scanf("%d",&sum1);
    printf("Enter Second Number : ");
    scanf("%d",&sum2);
    sum = sum1 + sum2;
    printf("Addition is : %d",sum);


    //Question-3

    printf("\n-------- For Factorial --------\n\n");
    int num_fact, fact=1;
    printf("Enter Any Number : ");
    scanf("%d",&num_fact);
    for(int i=1; i<=num_fact; i++)
    {
        fact *= i;
    }
    printf("Factorial is : %d",fact);


    //Question-4

    printf("\n-------- Check Odd Or Even --------\n\n");
    int odd_even;
    printf("Enter Any Number : ");
    scanf("%d",&odd_even);
    if(odd_even%2 == 0)
    {
        printf("%d is Even Number...",odd_even);
    }
    else
    {
        printf("%d is Odd Number...",odd_even);
    }


    //Question-5

    printf("\n-------- Check Largest Number --------\n\n");
    int max1, max2, max3;
    printf("Enter First Number : ");
    scanf("%d",&max1);
    printf("Enter Second Number : ");
    scanf("%d",&max2);
    printf("Enter Third Number : ");
    scanf("%d",&max3);
    if(max1>max2 && max1>max3)
    {
        printf("'%d' First Number is Largest...",max1);
    }
    if(max2>max1 && max2>max3)
    {
        printf("'%d' Second Number is Largest...",max2);
    }
    else
    {
        printf("'%d' Third Number is Largest...",max3);
    }


    //Question-6

    printf("\n-------- Swap Number --------\n\n");
    int swap1, swap2;
    printf("Enter First Number : ");
    scanf("%d",&swap1);
    printf("Enter Second Number : ");
    scanf("%d",&swap2);
    printf("\n--- After Swap ---\n\n");
    printf("First Number : %d",swap2);
    printf("\nSecond Number : %d",swap1);


    //Question-7

    printf("\n-------- Check Leap Year Or Not --------\n\n");
    int year;
    printf("Enter Any Year : ");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        printf("'%d' is Leap Year...",year);
    }
    else
    {
        printf("'%d' is Not Leap Year...",year);
    }


    //Question-8

    printf("\n-------- Fibonacci Series --------\n\n");
    int first=0, second=1, next, ans;
    printf("Enter Any Number : ");
    scanf("%d",&next);
    for(int i=0; i<=next; i++)
    {
        printf("%d  ",first);
        ans = first + second;
        first = second;
        second = ans;
    }


    //Question-9

    printf("\n-------- Sum Of Digit Of Number --------\n\n");
    char sum_num[100];
    int digit = 0;
    printf("Enter a number: ");
    scanf("%s",sum_num);
    for(int i = 0; sum_num[i]; i++)
    {
        digit += sum_num[i] - '0';
        // digit += sum_num[i] - 48;
        // digit += sum_num[i] % 48;
    }
    printf("Sum Of All Digits is : %d",digit);


    //Question-10

    printf("\n-------- Reverse Number --------\n\n");
    char rev_num[10];
    int count;
    printf("Enter a number: ");
    scanf("%s",rev_num);

    for (int i=0; rev_num[i]; i++)
    {
        count += i;
    }
    printf("Reverse Number is : ");
    for (int i=count-1; rev_num[i]>=1; i--)
    {
        printf("%c",rev_num[i]);
    }


    return 0;
}
