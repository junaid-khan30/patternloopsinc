#include<stdio.h>
int main()
{
    int n, i;
    printf("\n Enter any number : ");
    scanf("%d",&n);
    printf("\n Multiplication tanble of %d",n);
    perror("\n **************");
    for(i=0; i<=20; i++)
    {
        printf("\n %d X %d = %d", n, i, (n+i));
}return 0;
    }
    