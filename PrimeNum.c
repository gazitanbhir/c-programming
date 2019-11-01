#include <stdio.h>

int main(void)
{
    int num, i, p;
    printf("Enter Number to Test: ");
    scanf("%d",&num);

    p = 1;
    printf("Check: ");
    for(i=2; i<=num/2; i++)
        if((num%i)==0) p=0;
    if(p==1) printf("%d is Prime",num);
    else printf("%d is not prime",num);


    return 0;
}

