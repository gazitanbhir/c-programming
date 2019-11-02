#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,a,total=0;
    printf("Numbers want to add:");
    scanf("%d",&a);
    for(i=0; i<=a; i++)
    {
        printf("%d",i);
        if(i<a) printf("+");
        total=total+i;
    }
    printf("=%d",total);
    printf("\n");
    printf("The sum of 1st %d numbers is: %d",a,total);
    return 0;
}

