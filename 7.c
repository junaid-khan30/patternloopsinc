#include<stdio.h>
int main()
{
    int m, n, sum=0;
    printf("Enter m value : ");
    scanf("%d",&m);
    printf("Enter n value : ");
    scanf("%d",&n);
    while(m<=n)
    {
        sum = sum + m;
        m = m + 1;
    }printf("sum betwen m to n is %d",sum);
    return 0;
}