#include<math.h>
main()
{
    int n,i,flag=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
            printf("%d is a prime number",n);
    else
            printf("%d is not a prime number",n);
  //prime number within a range
    int a,b,i,j;
    printf("enter starting number of the range:");
    scanf("%d",&a);
    printf("enter ending number of the range:");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
          printf("%d\t",i);
    }
}
