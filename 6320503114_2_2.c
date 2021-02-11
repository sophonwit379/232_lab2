#include<stdio.h>
#include<math.h>
int main()
{
    float n,r,r2,r3,r4,s;
    char pro;
    scanf("%c",&pro);
    scanf("%f",&n);
    if(pro == 'A')
    {
        s=199;
        if(n>199)
        {
            r=n-199;
            r2=(r*100)-(floor(r)*100);
            r3=(r*100)-r2;
            r+=r3;
            r4=(r2*3)/60.0;
            r+=r4;
        printf("%0.2f",s);
        }
    }
    else if(pro == 'B')
    {
        s=299;
        if(n>299)
        {
            r=n-299;
            r2=(r*100)-(floor(r)*100);
            r3=(r*100)-r2;
            r+=r3;
            r4=(r2*2)/60.0;
            r+=r4;
        }
        printf("%0.2f",s);
    }


}
