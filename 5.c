//while loop
#include<stdio.h>
int main()
{
    int sum=0;
    int i=0;
    while(i<=10)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("The sum of 10 numbers is %d",sum);
    return 0;

}