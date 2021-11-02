main()
{
    int num,n,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The number in reverse order is: %d",rev);
}
