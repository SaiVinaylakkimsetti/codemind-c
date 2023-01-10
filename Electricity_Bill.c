#include<stdio.h>
int main()
{
    int u;
    float uc,b,tb,s;
    scanf("%d",&u);
    if(u<=199)
    {
        uc=1.20;
    }
    else if(u>=200 && u<400)
    {
        uc=1.40;
    }
    else if(u>=400 && u<600)
    {
        uc=1.60;
    }
    else if(u>=600 && u<800)
    {
        uc=1.80;
    }
    else{uc=2.00;
    }
    b=u*uc;
    if(b>400)
    {
        s=b*0.15;
    }
    tb=b+s;
    {
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",uc);
        printf("Bill: %0.2f
",b);
        printf("Surcharge: %.2f
",s);
printf("Total Amount: %.2f",tb);
    }
}