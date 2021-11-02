main()
{
    int year;
    printf("enter any year:");
    scanf("%d",&year);
    if(year%400==0&&year%100==0)
        printf("this is a leap year");
    else if(year%4==0&&year%100!=0)
        printf("this is a leap year");
    else
        printf("not a leap year");
    getch();
}
