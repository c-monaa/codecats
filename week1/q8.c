#include <math.h>
main()
{
    int a,b,c,d;
    float root1,root2;
    printf("enter coefficient of a:");
    scanf("%d",&a);
    printf("enter coefficient of b:");
    scanf("%d",&b);
    printf("enter constant:");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    root1=(float)(-b+sqrt(d))/(2*a);
    root2=(float)(-b-sqrt(d))/(2*a);
    printf("roots of quadratic %dx^2+%dx+%d: is %f and %f",a,b,c,root1, root2);
}
