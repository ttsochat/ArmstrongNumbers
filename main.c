#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    long num=0, sum=0, temp;
    printf("Give a three digit number.\n");
    scanf("%ld",&num);
    temp=num;
    while (temp!=0)
    {
        a=temp%10;
        sum=sum+a*a*a;
        temp=temp/10;
    }
    if (num==sum)
        printf("\nThe number %ld is an Armstrong number.", num);
    else
        printf("\nThe number %ld is not an Armstrong number.", num);

    return 0;
}
