main()
{
    int phys, chem, bio, maths, comp,total,per;
    printf("enter marks of physics:");
    scanf("%d",&phys);
    printf("enter marks of chemistry:");
    scanf("%d",&chem);
    printf("enter marks of biology:");
    scanf("%d",&bio);
    printf("enter marks of mathematics:");
    scanf("%d",&maths);
    printf("enter marks of computer:");
    scanf("%d",&comp);
    total=phys+chem+bio+maths+comp;
    per=total/5;
    printf("percentage is %d\n",per);
    if(per>=90) printf("grade A");
    else if(per>=80) printf("grade B");
    else if(per>=70) printf("grade C");
    else if(per>=60) printf("grade D");
    else if(per>=40) printf("grade E");
    else printf("grade F");


  /*  switch(per)
    {
        case per>=90: printf("grade A");
        break;
        case per>=80: printf("grade B");
        break;
        case per>=70: printf("grade C");
        break;
        case per>=60: printf("grade D");
        break;
        case per>=40: printf("grade E");
        break;
        case per<40: printf("grade F");
    }*/
}
