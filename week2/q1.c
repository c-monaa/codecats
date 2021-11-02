main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    printf("the first %d natural number is:\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    printf("\nthe sum of Natural Number upto %d terms:%d\n",n,sum);
 //sum of even numbers
    int evn,suum=0;
    printf("enter a number:");
    scanf("%d",&evn);
    for(int i=2;i<=2*evn;i=i+2)
    {
        suum=suum+i;
    }
    printf("sum of first %d odd number is %d\n",evn,suum);
  //sum of odd numbers
    int odd,summ=0;
    printf("enter a number:");
    scanf("%d",&odd);
    for(int j=1;j<=2*odd-1;j=j+2)
    {
        summ=summ+j;
    }
    printf("sum of first %d odd number is %d\n",odd,summ);
  //bitwise AND operator in checking even and odd
   int num;
   printf("enter a number:");
   scanf("%d",&num);
   if((num&1)==0)
    printf("even");
   else
    printf("odd");
}
