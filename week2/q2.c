main()
{
    int i=1,count,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(count=2;count<=n;count++)
        i=i*count;
    printf("factorial of %d is: %d",n,i);
    getch();
}
