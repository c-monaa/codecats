#include <math.h>
main()
{
    int num,n,count=0,sum=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    //printf("%d",count);
    num=n;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+(pow(rem,count));
        num=num/10;
    }
    if(sum==n)
        printf("%d is a armstrong number",n);
    else
        printf("%d is not a armstrong number",n);
}
