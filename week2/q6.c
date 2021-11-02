main()
{
    int num,power,res=1;
    printf("enter a number:");
    scanf("%d",&num);
    printf("enter exponent of the number:");
    scanf("%d",&power);
    for(int i=1;i<=power;i++)
    {
        res=res*num;
    }
    printf("%d^%d : %d",num,power,res);
}
