main()
{
    int amt,count=0,amount;
    printf("enter amount:");
    scanf("%d",&amt);
    amount=amt;
    while(amt!=0)
    {
        if(amt>=500)
        {
            count++;
            amt=amt-500;
        }
        else if(amt>=100)
            {
            count++;
            amt=amt-100;
        }
        else if(amt>=50)
        {
            count++;
            amt=amt-50;
        }
        else if(amt>=20)
        {
            count++;
            amt=amt-20;
        }
        else if(amt>=10)
        {
            count++;
            amt=amt-10;
        }
        else if(amt>=5)
        {
            count++;
            amt=amt-5;
        }
        else if(amt>=2)
        {
            count++;
            amt=amt-2;
        }
        else if(amt>=1)
        {
            count++;
            amt=amt-1;
        }
    }
    printf("number of notes in %d rupees is %d",amount,count);
}
