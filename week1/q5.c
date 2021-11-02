main()
{
    int ch;
    printf("enter anything:");
    scanf("%c",&ch);
    if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
        printf("%c is alphabet",ch);
    else if (ch>=48&&ch<=57)
        printf("%c is number",ch);
    else
        printf("%c is special character",ch);
   // printf("%d",ch);
}
