main()
{
    int num,zeros,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        sum=sum+num/5;
        num=num/5;
    }
    printf("trailing zeros are:%d",sum);
}
