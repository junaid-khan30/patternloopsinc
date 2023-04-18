#include <stdio.h>

int main() 
{
    for(int i=1; i<=5; i++)
    {
        printf("\n Pass %d -",i);
        for(int j=1; j<=5; j++)
        {
            printf("%d ",j);
        }
    }
    
    return 0;
}