main()
{
    int sal,HRA,DA;
    printf("enter salary:");
    scanf("%d",&sal);
    if (sal<=10000)
    {
        HRA=sal*20/100;
        DA=sal*80/100;
        sal=sal+DA+HRA;
        printf("gross salary is %d",sal);
    }
    else if(sal<=20000)
    {
        HRA=sal*25/100;
        DA=sal*90/100;
        sal=sal+DA+HRA;
        printf("gross salary is %d",sal);
    }
    else
    {
        HRA=sal*30/100;
        DA=sal*95/100;
        sal=sal+DA+HRA;
        printf("gross salary is %d",sal);
    }
}
